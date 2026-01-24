// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4070__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out3_vld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_9))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4049__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4002__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4051__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4050__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4041__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4017__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4020__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4018__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4047__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4052__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4054__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4003__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4045__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4019__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4053__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4055__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4046__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4021__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4048__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4022__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4043__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4044__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4007__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4007__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4007__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4007__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4024__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4024__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4024__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4024__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4058__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4058__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4058__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4058__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4069__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4006__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4006__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4006__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4006__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4023__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4023__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4023__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4023__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4007__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4007__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4007__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4007__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4024__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4024__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4024__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4024__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4056__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4057__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4058__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4058__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4058__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4058__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4036__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4037__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_2) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_13))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_3) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_5))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4004__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4005__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4077__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4077__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4077__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4077__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4078__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4078__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4078__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4078__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4096__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4096__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4096__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4096__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4096__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4096__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4096__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4096__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4095__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4094__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4097__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4078__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4078__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4078__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4078__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4098__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4101__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4103__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4103__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4103__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4103__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4137__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4136__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4077__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4077__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4077__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4077__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4100__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4102__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4084__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4084__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4084__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4084__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4099__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4079__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4085__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4085__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4085__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4085__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4104__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4111__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4083__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4133__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4135__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4134__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4132__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4129__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4131__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4130__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4128__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4082__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4080__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4081__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4107__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4108__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4109__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4109__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4109__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4109__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2[3U] 
                           << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data2[2U] 
                                              >> 0x00000014U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4139__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_out2_vld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_9))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4118__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4071__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4120__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4119__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4110__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4086__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4089__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4087__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4116__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4121__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4123__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4072__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4114__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4088__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4122__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4124__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4115__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4090__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4117__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4091__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4112__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4113__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4076__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4076__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4076__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4076__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4093__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4093__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4093__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4093__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4127__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4127__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4127__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4127__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[3U] 
                           << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                                              >> 0x00000014U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4138__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4075__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4075__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4075__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4075__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4092__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4092__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4092__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4092__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4076__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4076__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4076__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4076__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4093__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4093__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4093__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4093__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4125__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4126__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4127__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4127__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4127__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4127__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4105__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4106__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__u_HLS_fp17_pooling_add_3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_4) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in3_b_rdy))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT____VdfgRegularize_h202a30a0_0_4) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_2__DOT__fp16_add_in3_a_rdy))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4073__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4074__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4146__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4146__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4146__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4146__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4147__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4147__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4147__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4147__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4165__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4165__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4165__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4165__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4165__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4165__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4165__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4165__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4164__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4163__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4166__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4147__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4147__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4147__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4147__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4167__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4170__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4172__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4172__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4172__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4172__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4206__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4205__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4146__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4146__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4146__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4146__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4169__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4171__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4153__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4153__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4153__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4153__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4168__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4148__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4154__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4154__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4154__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4154__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4173__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4180__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4152__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4202__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4204__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4203__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4201__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4198__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4200__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4199__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4197__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4151__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4149__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4150__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4176__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4177__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4178__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4178__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4178__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4178__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__input_0 
        = (0x0001ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3[0U]);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4208__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out_prdy) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_8)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4187__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4140__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4189__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4188__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4179__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4155__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4158__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4156__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4185__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4190__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4192__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4141__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4183__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4157__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4191__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4193__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4184__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4159__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4186__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4160__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4181__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4182__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4145__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4145__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4145__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4145__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4162__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4162__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4162__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4162__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4196__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4196__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4196__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4196__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__input_0 
        = (0x0001ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[0U]);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4207__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4144__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4144__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4144__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4144__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4161__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4161__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4161__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4161__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4145__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4145__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4145__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4145__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4162__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4162__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4162__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4162__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4194__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4195__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4196__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4196__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4196__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4196__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4174__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4175__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in0_b_rdy) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_6))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in0_a_rdy) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_6))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4142__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4143__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4215__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4215__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4215__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4215__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4216__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4216__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4216__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4216__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4234__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4234__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4234__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4234__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4234__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4234__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4234__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4234__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4233__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4232__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4235__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4216__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4216__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4216__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4216__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4236__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4239__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4241__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4241__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4241__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4241__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4275__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4274__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4215__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4215__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4215__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4215__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4238__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4240__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4222__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4222__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4222__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4222__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4237__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4217__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4223__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4223__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4223__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4223__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4242__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4249__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4221__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4271__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4273__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4272__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4270__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4267__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4269__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4268__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4266__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4220__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4218__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4219__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4245__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4246__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4247__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4247__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4247__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4247__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3[1U] 
                           << 4U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3[0U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4277__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_10) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out0_vld))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4256__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4209__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4258__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4257__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4248__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4224__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4227__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4225__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4254__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4259__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4261__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4210__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4252__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4226__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4260__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4262__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4253__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4228__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4255__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4229__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4250__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4251__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4214__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4214__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4214__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4214__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4231__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4231__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4231__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4231__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4265__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4265__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4265__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4265__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[1U] 
                           << 4U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[0U] 
                                     >> 0x0000001cU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4276__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4213__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4213__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4213__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4213__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4230__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4230__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4230__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4230__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4214__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4214__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4214__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4214__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4231__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4231__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4231__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4231__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4263__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4264__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4265__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4265__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4265__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4265__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4243__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4244__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_0) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_14))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_1) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_7))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4211__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4212__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4284__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4284__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4284__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4284__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4285__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4285__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4285__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4285__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_3 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4303__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4303__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4303__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4303__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__sel = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__sbit = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__sbit;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__sbit = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__arg2 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__arg1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 
                = (0x0000007fU & ((IData)(0x0dU) + 
                                  (0x00000040U | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 
                = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0;
        }
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                        & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))) 
                    & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4303__vector 
                = (0x01ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp 
                = (0x01ffffffU & VL_SHIFTR_III(25,25,32, __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4303__vector, 1U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4303__Vfuncout 
                = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__Vstatic__tmp);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_25_24_1__4303__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9 
        = (IData)((0U == (0x00000078U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x00780000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x00078000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5 
        = (IData)((0U == (0x00007800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_2 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_3 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_4_2__4302__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4301__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0U == (0x00000780U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x10U)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_0 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_1 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_2 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__sel)))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX1HOT_v_6_3_2__4304__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10 = 0U;
    }
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4285__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_lpi_1_dfm_10) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4285__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4285__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4285__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4) 
              | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_6)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__input_1 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                                  >> 0x0cU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__input_0 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4305__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4308__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_15_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl 
        = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_4) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4310__vector 
                            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4310__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4310__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_1_10__4310__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_FpAdd_6U_10U_is_addition_FpAdd_6U_10U_is_addition_xnor_svs_st_1_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_42_4_sdt_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                  << 2U))) | (((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00600000U 
                                                          & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                        & ((~ 
                                                            (((~ (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x00006000U 
                                                                            & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                          & ((0U 
                                                                              != 
                                                                              (0x00001800U 
                                                                               & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                             | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 9U))))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                             | ((~ (IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x00000060U 
                                                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                            & ((0U 
                                                                                != 
                                                                                (0x00000018U 
                                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                               | (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                                >> 1U))))))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))) 
                                                           & ((0U 
                                                               != 
                                                               (0x00180000U 
                                                                & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000011U))))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                       >> 0x00000016U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                              >> 0x00000014U))) 
                                                         | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                               >> 0x00000012U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                     >> 0x00000010U)))) 
                                                             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | ((((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                  >> 0x0000000eU) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000cU))) 
                                                                    | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                         >> 0x0000000aU) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                               >> 8U)))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_5)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                    >> 6U) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                           >> 4U))) 
                                                                      | ((1U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                                                              >> 1U))) 
                                                                         & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)))) 
                                                                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10))))))) 
                                                    | (IData)(
                                                              (((0U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_9)) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__c_h_1_10)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__arg1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__arg2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__arg2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__arg1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__arg1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__arg2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__Vfuncout 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__Vfuncout 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u_1__4344__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_rg__DOT__fshl_u__4343__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4284__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4284__vector), 5U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4284__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_6_1_5__4284__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4307__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
                  | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__input_0 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4309__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_slc_FpSignedBitsToFloat_6U_10U_1_ubits_9_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_mux_13_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4)))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4291__vector 
                                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn;
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4291__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4291__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2s_5_7__4291__Vfuncout))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse))) {
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__sel 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt;
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__input_1 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__input_0 
                = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__sel)
                    ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__input_1)
                    : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__input_0));
            __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 
                = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4306__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 
                = (1U & (~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)));
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp;
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt);
            vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 
                = (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_4_if_acc_1_itm_5_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4286__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9 
        = (1U & ((~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3 
        = ((0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3)) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4292__vector 
                    = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpNormalize_6U_23U_acc_nl));
                vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
                    = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4292__vector), 6U));
                vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4292__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4292__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpMantRNE_23U_11U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_FpAdd_6U_10U_or_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_10_2_2__4311__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse 
        = (1U & (~ ((IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_5))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__input_1 
        = (0x0000003fU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_qr_lpi_1_dfm_4) 
                                         + (0x00000020U 
                                            | (0x0000001fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__leading_sign_23_0_rg__DOT__rtn)))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__input_1)
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_FpNormalize_6U_23U_and_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4318__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_oelse_not_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpNormalize_6U_23U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__input_1
            : 0U);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4290__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshr_u__4340__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__4342__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_u__4341__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_lshift_rg__DOT__fshl_s__4339__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__sbit = 0U;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg2 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_acc_itm_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_IsZero_6U_10U_1_or_itm_2) 
            << 0x0000000aU) | (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_bits_1_sva_1_15_0_1)));
    if ((0x00000040U & (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg2))) {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__sbit) 
                << 0x0000000bU) | (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg1));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__arg1 
            = (0x000007ffU & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x007ff800U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x007fffffU & VL_SHIFTRS_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshr_u__4336__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__sbit 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__arg2 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__arg1 
            = __Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__arg1;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__sbit 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__sbit;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__arg2 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__arg2;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__sbit) 
                << 0x0000000bU) | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x007fffffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__sbit))));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x007ff000U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__arg1));
        vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x007fffffU & VL_SHIFTL_III(23,23,7, vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__arg2)));
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__4338__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_u__4337__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1 
        = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_int_mant_p1_lshift_rg__DOT__fshl_s__4335__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                 >> 0x17U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__input_1 
        = (0x003fffffU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                          >> 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__input_0 
        = (0x003fffffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1);
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_22_2_2__4289__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4287__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_lor_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_asn_1_mx0w1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_int_mant_p1_sva;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4288__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0 
        = (IData)(((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0 
                    >> 0x0000000bU) & (0U != (0x000017ffU 
                                              & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__input_0 
        = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4314__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_smaller_qr_lpi_1_dfm_mx0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_addend_larger_qr_lpi_1_dfm_mx0;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_23_2_2__4315__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_carry_sva_mx0w0) 
           & (IData)(((0x003ff000U == (0x003ff000U 
                                       & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_2_21_0_mx0)) 
                      & ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_1_lpi_1_dfm_1 
                          >> 0x00000016U) | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                                             >> 0x00000017U)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_acc_1_nl 
        = (0x03ffffffU & (((0x01000000U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp)) 
                                           << 0x00000018U)) 
                           | ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_2_nl 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_2_and_tmp))))) 
                          + VL_EXTEND_II(26,25, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4316__vector 
                            = (1U | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_else_2_mux_3_nl 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4316__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4316__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_24_25__4316__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__0(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_data3[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__4346__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp 
        = (1U & (~ (IData)(((0x0000fc00U != (0x0000fc00U 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                            | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt))))));
}

void Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out_prdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_out3_vld) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_9))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4325__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4278__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_o_expo_FpAdd_6U_10U_o_expo_nor_rgt 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                     >> 0x00000017U) | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
              >> 0x00000017U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__input_1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4327__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_47_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4326__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4317__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4293__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_8));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__input_0 
        = (1U & (~ ((~ ((vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                         >> 0x00000017U) & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4296__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                    | (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_int_mant_p1_sva_3 
                       >> 0x00000017U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4294__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1)) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_2_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_if_3_if_acc_1_itm_5_1) 
           & (IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_8));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_1_FpSignedBitsToFloat_6U_10U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_38));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_41_cse)))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4323__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_31_nl)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4328__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_4));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_75_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4330__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_15_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4279__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_24_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4321__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_5_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_10))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4295__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_32_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4329__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_34_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_43)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4331__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_5;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_11_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4322__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_4_nl)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_tmp)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4297__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__sel 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_inf_lpi_1_dfm_4)) 
            | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_or_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_13_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_14_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4324__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4298__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_18_nl;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_6));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4319__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpMantRNE_23U_11U_else_and_svs_2;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_8;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4320__Vfuncout;
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__1(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4283__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4283__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4283__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4283__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4300__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4300__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4300__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4300__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4334__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4334__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4334__vector;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4334__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__sel = 0;
    // Body
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[2U] 
                           << 8U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__datin_buf_2d[1U] 
                                     >> 0x00000018U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__sel)
            ? __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__input_1
            : __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__input_0);
    __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__4345__Vfuncout;
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp 
        = ((0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x0000000aU)) == (0x0000003fU 
                                                & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl 
        = (0x000001ffU & ((IData)(1U) + ((0x00000040U 
                                          | (0x0000003fU 
                                             & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x0aU))) 
                                         + VL_EXTEND_II(9,7, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4282__vector 
                                = (0x0000003fU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x0aU)));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4282__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4282__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_6_7__4282__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl 
        = (0x00001fffU & ((IData)(1U) + ((0x00000400U 
                                          | (0x000003ffU 
                                             & vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(13,11, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4299__vector 
                                = (0x000003ffU & (~ vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4299__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4299__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__conv_u2u_10_11__4299__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c 
        = ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4283__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4283__vector), 6U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4283__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_1_6__4283__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4300__vector 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nl_FpAdd_6U_10U_is_a_greater_oif_aelse_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp 
        = (0x000007ffU & VL_SHIFTR_III(11,11,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4300__vector), 0x0000000aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4300__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_11_1_10__4300__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1));
    vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_oif_aelse_acc_itm_10_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpSignedBitsToFloat_6U_10U_or_1_rgt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
            & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_IsNaN_6U_10U_1_nor_tmp) 
               & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_5))) 
           | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_58_m1c)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp 
        = (1U & ((~ ((~ (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1))) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_51_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_is_a_greater_acc_1_itm_6_1)) 
              & (IData)(vlSelfRef.HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_3)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__input_1 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                          >> 0x0aU));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__input_0 
        = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4332__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_right_shift_qelse_and_tmp;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__input_1 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             >> 0x0aU)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__input_0 
        = (0x0000003fU & (~ (vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                             >> 0x0aU)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4333__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4334__vector 
        = (0x0000007fU & ((1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_2_nl) 
                                 << 1U)) + (1U | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_right_shift_qif_mux_3_nl) 
                                                  << 1U))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4334__vector), 1U));
    __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4334__Vfuncout 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__readslicef_7_6_1__4334__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_b_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__sel 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse;
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4312__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_a_left_shift_FpAdd_6U_10U_a_right_shift_nand_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_61_cse)));
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__input_1 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__z_out;
                    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_v_6_2_2__4313__Vfuncout))));
}

void Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__2(Vsim_HLS_fp17_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_HLS_fp17_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__u_HLS_fp17_pooling_add_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10;
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__Vfuncout;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__input_0;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__input_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__sel;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_2) 
                 & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_15))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT__fp16_add_in_pvld) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_3) 
                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_fp16_cal2d_pooling_sum_3__DOT____VdfgRegularize_h202a30a0_0_5))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__input_1 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4280__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_tmp_47 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__HLS_fp17_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__sel 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__input_0 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__sel)
            ? (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__input_1)
            : (IData)(__Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__input_0));
    __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp17_add_core_inst__DOT__MUX_s_1_2_2__4281__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__HLS_fp17_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__FpAdd_6U_10U_and_8_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_tmp_2));
    vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__IsNaN_6U_10U_1_aelse_and_cse 
        = ((IData)(HLS_fp17_add_core_inst__DOT____VdfgRegularize_h7862d75c_0_10) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_add_core_inst__DOT__mux_16_nl));
}
