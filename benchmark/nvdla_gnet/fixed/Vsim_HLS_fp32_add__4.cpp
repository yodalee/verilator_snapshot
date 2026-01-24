// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_7;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1139__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp16_dout_0;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1138__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp 
        = ((0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl 
        = (0x03ffffffU & ((IData)(1U) + ((0x00800000U 
                                          | (0x007fffffU 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(26,24, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1110__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1110__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1110__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1110__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1089__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1089__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1089__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1089__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_7) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p4__DOT__p4_pipe_valid)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1085__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1124__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1126__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1083__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1086__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1084__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1121__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1122__Vfuncout;
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp_sq_out_vld) 
                 & (0x01feU == (0x01feU & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp_sum_in_rdy))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len)) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp_sq_out_vld) 
                 & (0x000000ffU == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_22)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1087__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1127__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1088__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl));
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1154__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1154__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1154__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1154__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1160__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1160__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1160__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1160__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__arg2 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 
                = (0ULL != (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1148__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1149__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1154__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1154__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1154__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1154__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_3 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__sel)))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1170__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 = 0ULL;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 
        = (IData)((0ULL == (0x00000000000001e0ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 
        = (IData)((0ULL == (0x0000000001e00000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 
        = (IData)((0ULL == (0x0000000000001e00ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 
        = (IData)((0ULL == (0x000000001e000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 
        = (IData)((0ULL == (0x000000000001e000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 
        = (IData)((0ULL == (0x000001e000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 
        = (IData)((0ULL == (0x00000001e0000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0ULL == (0x00001e0000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 
        = (IData)((0ULL == (0x0001e00000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1)))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1169__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x1fU)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1152__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1152__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1152__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1152__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1150__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1150__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1150__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1150__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1151__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1151__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1151__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1151__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1174__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1172__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__sel));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1173__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1171__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1175__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 
        = (IData)(((0ULL == (0x000000000000001eULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0ULL == (0x0000001e00000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1153__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 
        = (IData)((((0ULL == (0x00000000001e0000ULL 
                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl 
        = (IData)(((0ULL == (0x0001800000000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (((~ (((~ (IData)(((0ULL == (0x0000000180000000ULL 
                                                  & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                        & ((~ ((~ (IData)(
                                                          ((0ULL 
                                                            == 
                                                            (0x0000000001800000ULL 
                                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                           & ((0ULL 
                                                               != 
                                                               (0x0000000000600000ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                             >> 0x00000013U)))))))) 
                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))) 
                                           & ((0ULL 
                                               != (0x0000000060000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                             >> 0x0000001bU))))))))) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                           | (((~ (IData)(((0ULL == 
                                            (0x0000000000018000ULL 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                           & ((~ ((~ (IData)(
                                                             ((0ULL 
                                                               == 
                                                               (0x0000000000000180ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              & ((0ULL 
                                                                  != 
                                                                  (0x0000000000000060ULL 
                                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                                 | (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 3U)))))))) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                              & ((0ULL 
                                                  != 
                                                  (0x0000000000006000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x0000000bU))))))))) 
                               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                       & (~ ((~ (IData)(((0ULL == (0x0000018000000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                         & ((0ULL != 
                                             (0x0000006000000000ULL 
                                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                            | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                           >> 0x00000023U)))))))) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))) 
                      & ((0ULL != (0x0000600000000000ULL 
                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                         | (0U == (3U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                 >> 0x0000002bU))))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl 
        = (1U & ((~ ((IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x00000030U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                               >> 0x0000002eU)))) 
                                                  | ((((IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x00000020U)) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                       >> 0x0000001eU)))) 
                                                          | ((((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x0000001cU)) 
                                                               | (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                              >> 0x0000001aU))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9)) 
                                                             | (((IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x00000018U)) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000016U)))) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000014U)) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000012U))))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((((IData)(
                                                                   (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                    >> 0x00000010U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x0000000eU))))) 
                                                          | (((((IData)(
                                                                        (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                         >> 0x0000000cU)) 
                                                                | (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x0000000aU))))) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17)) 
                                                              | (((IData)(
                                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                           >> 8U)) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 6U)))) 
                                                                     | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 4U)) 
                                                                         | (1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 2U))))) 
                                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                                                         & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)) 
                                                        | ((((IData)(
                                                                     (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                      >> 0x0000002cU)) 
                                                             | (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                            >> 0x0000002aU))))) 
                                                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2)) 
                                                           | (((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x00000028U)) 
                                                               | ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000026U)))) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000024U)) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000022U))))) 
                                                                     & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))))))) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23) 
             << 5U) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
                         & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5)) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4)) 
                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23))) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)))) 
                                  << 3U))) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
                                                & ((~ 
                                                    (((~ 
                                                       ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3)) 
                                                           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3)) 
                                                              | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3)) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_3_5.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_3_5.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_3_5.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1195__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1194__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1193__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1163__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1163__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1163__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1163__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1161__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1162__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1164__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1164__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1164__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1164__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1180__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1182__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1155__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1157__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1156__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1158__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1160__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1160__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1160__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1160__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1176__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1176__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1176__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1176__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1159__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1177__Vfuncout;
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p4__DOT__p4_pipe_data;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp 
        = ((0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl 
        = (0x03ffffffU & ((IData)(1U) + ((0x00800000U 
                                          | (0x007fffffU 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(26,24, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1167__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1167__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1167__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1167__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1146__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1146__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1146__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1146__Vfuncout))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_9)
               : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_9) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__stage1_pipe_in_rdy))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_10)
               : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_10) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__stage1_pipe_in_rdy))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((0U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp16_sum_rdy)
               : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum_stage1_rdy) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p8__DOT__p8_pipe_valid))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1142__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1181__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1183__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1140__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1143__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1144__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1184__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1145__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1141__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1178__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1179__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl));
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1211__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1211__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1211__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1211__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1217__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1217__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1217__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1217__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 
                = (0ULL != (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1205__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1206__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1211__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1211__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1211__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1211__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_3 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__sel)))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1227__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 = 0ULL;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 
        = (IData)((0ULL == (0x00000000000001e0ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 
        = (IData)((0ULL == (0x0000000001e00000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 
        = (IData)((0ULL == (0x0000000000001e00ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 
        = (IData)((0ULL == (0x000000001e000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 
        = (IData)((0ULL == (0x000000000001e000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 
        = (IData)((0ULL == (0x000001e000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 
        = (IData)((0ULL == (0x00000001e0000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0ULL == (0x00001e0000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 
        = (IData)((0ULL == (0x0001e00000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1)))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1226__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x1fU)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1209__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1209__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1209__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1209__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1207__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1207__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1207__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1207__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1208__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1208__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1208__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1208__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1231__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1229__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__sel));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1230__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1228__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 
        = (IData)(((0ULL == (0x000000000000001eULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0ULL == (0x0000001e00000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1210__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 
        = (IData)((((0ULL == (0x00000000001e0000ULL 
                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl 
        = (IData)(((0ULL == (0x0001800000000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (((~ (((~ (IData)(((0ULL == (0x0000000180000000ULL 
                                                  & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                        & ((~ ((~ (IData)(
                                                          ((0ULL 
                                                            == 
                                                            (0x0000000001800000ULL 
                                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                           & ((0ULL 
                                                               != 
                                                               (0x0000000000600000ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                             >> 0x00000013U)))))))) 
                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))) 
                                           & ((0ULL 
                                               != (0x0000000060000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                             >> 0x0000001bU))))))))) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                           | (((~ (IData)(((0ULL == 
                                            (0x0000000000018000ULL 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                           & ((~ ((~ (IData)(
                                                             ((0ULL 
                                                               == 
                                                               (0x0000000000000180ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              & ((0ULL 
                                                                  != 
                                                                  (0x0000000000000060ULL 
                                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                                 | (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 3U)))))))) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                              & ((0ULL 
                                                  != 
                                                  (0x0000000000006000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x0000000bU))))))))) 
                               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                       & (~ ((~ (IData)(((0ULL == (0x0000018000000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                         & ((0ULL != 
                                             (0x0000006000000000ULL 
                                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                            | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                           >> 0x00000023U)))))))) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))) 
                      & ((0ULL != (0x0000600000000000ULL 
                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                         | (0U == (3U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                 >> 0x0000002bU))))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl 
        = (1U & ((~ ((IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x00000030U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                               >> 0x0000002eU)))) 
                                                  | ((((IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x00000020U)) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                       >> 0x0000001eU)))) 
                                                          | ((((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x0000001cU)) 
                                                               | (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                              >> 0x0000001aU))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9)) 
                                                             | (((IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x00000018U)) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000016U)))) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000014U)) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000012U))))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((((IData)(
                                                                   (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                    >> 0x00000010U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x0000000eU))))) 
                                                          | (((((IData)(
                                                                        (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                         >> 0x0000000cU)) 
                                                                | (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x0000000aU))))) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17)) 
                                                              | (((IData)(
                                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                           >> 8U)) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 6U)))) 
                                                                     | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 4U)) 
                                                                         | (1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 2U))))) 
                                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                                                         & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)) 
                                                        | ((((IData)(
                                                                     (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                      >> 0x0000002cU)) 
                                                             | (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                            >> 0x0000002aU))))) 
                                                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2)) 
                                                           | (((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x00000028U)) 
                                                               | ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000026U)))) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000024U)) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000022U))))) 
                                                                     & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))))))) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23) 
             << 5U) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
                         & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5)) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4)) 
                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23))) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)))) 
                                  << 3U))) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
                                                & ((~ 
                                                    (((~ 
                                                       ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3)) 
                                                           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3)) 
                                                              | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3)) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1222__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1251__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1250__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1220__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1220__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1220__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1220__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1218__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1219__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1221__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1221__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1221__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1221__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1237__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1212__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1214__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1213__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1215__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1217__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1217__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1217__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1217__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1233__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1233__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1233__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1233__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1216__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1234__Vfuncout;
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1252__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1204__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1204__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1204__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1204__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1225__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1225__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1225__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1225__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p8__DOT__p8_pipe_data[2U];
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp 
        = ((0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl 
        = (0x03ffffffU & ((IData)(1U) + ((0x00800000U 
                                          | (0x007fffffU 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(26,24, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1224__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1224__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1224__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1224__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1203__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1203__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1203__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1203__Vfuncout))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1225__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1225__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1225__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1225__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1204__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1204__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1204__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1204__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_11) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__stage2_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_11)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_12) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__stage2_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_12)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp16_sum_rdy)
               : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum_stage2_rdy) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p12__DOT__p12_pipe_valid))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1199__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1223__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1200__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1201__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1202__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1236__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl));
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1268__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1268__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1268__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1268__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1274__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1274__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1274__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1274__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 
                = (0ULL != (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1262__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1263__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1268__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1268__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1268__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1268__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_3 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__sel)))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1284__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 = 0ULL;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 
        = (IData)((0ULL == (0x00000000000001e0ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 
        = (IData)((0ULL == (0x0000000001e00000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 
        = (IData)((0ULL == (0x0000000000001e00ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 
        = (IData)((0ULL == (0x000000001e000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 
        = (IData)((0ULL == (0x000000000001e000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 
        = (IData)((0ULL == (0x000001e000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 
        = (IData)((0ULL == (0x00000001e0000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0ULL == (0x00001e0000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 
        = (IData)((0ULL == (0x0001e00000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1)))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1283__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x1fU)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1266__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1266__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1266__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1266__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1264__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1264__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1264__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1264__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1265__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1265__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1265__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1265__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1288__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1286__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__sel));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1287__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1285__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1289__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 
        = (IData)(((0ULL == (0x000000000000001eULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0ULL == (0x0000001e00000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1267__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 
        = (IData)((((0ULL == (0x00000000001e0000ULL 
                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl 
        = (IData)(((0ULL == (0x0001800000000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (((~ (((~ (IData)(((0ULL == (0x0000000180000000ULL 
                                                  & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                        & ((~ ((~ (IData)(
                                                          ((0ULL 
                                                            == 
                                                            (0x0000000001800000ULL 
                                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                           & ((0ULL 
                                                               != 
                                                               (0x0000000000600000ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                             >> 0x00000013U)))))))) 
                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))) 
                                           & ((0ULL 
                                               != (0x0000000060000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                             >> 0x0000001bU))))))))) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                           | (((~ (IData)(((0ULL == 
                                            (0x0000000000018000ULL 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                           & ((~ ((~ (IData)(
                                                             ((0ULL 
                                                               == 
                                                               (0x0000000000000180ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              & ((0ULL 
                                                                  != 
                                                                  (0x0000000000000060ULL 
                                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                                 | (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 3U)))))))) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                              & ((0ULL 
                                                  != 
                                                  (0x0000000000006000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x0000000bU))))))))) 
                               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                       & (~ ((~ (IData)(((0ULL == (0x0000018000000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                         & ((0ULL != 
                                             (0x0000006000000000ULL 
                                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                            | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                           >> 0x00000023U)))))))) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))) 
                      & ((0ULL != (0x0000600000000000ULL 
                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                         | (0U == (3U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                 >> 0x0000002bU))))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl 
        = (1U & ((~ ((IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x00000030U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                               >> 0x0000002eU)))) 
                                                  | ((((IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x00000020U)) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                       >> 0x0000001eU)))) 
                                                          | ((((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x0000001cU)) 
                                                               | (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                              >> 0x0000001aU))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9)) 
                                                             | (((IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x00000018U)) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000016U)))) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000014U)) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000012U))))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((((IData)(
                                                                   (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                    >> 0x00000010U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x0000000eU))))) 
                                                          | (((((IData)(
                                                                        (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                         >> 0x0000000cU)) 
                                                                | (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x0000000aU))))) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17)) 
                                                              | (((IData)(
                                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                           >> 8U)) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 6U)))) 
                                                                     | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 4U)) 
                                                                         | (1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 2U))))) 
                                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                                                         & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)) 
                                                        | ((((IData)(
                                                                     (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                      >> 0x0000002cU)) 
                                                             | (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                            >> 0x0000002aU))))) 
                                                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2)) 
                                                           | (((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x00000028U)) 
                                                               | ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000026U)))) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000024U)) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000022U))))) 
                                                                     & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))))))) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23) 
             << 5U) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
                         & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5)) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4)) 
                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23))) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)))) 
                                  << 3U))) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
                                                & ((~ 
                                                    (((~ 
                                                       ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3)) 
                                                           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3)) 
                                                              | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3)) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1279__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1308__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1307__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1277__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1277__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1277__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1277__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1275__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1276__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1278__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1278__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1278__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1278__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1294__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1296__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1269__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1271__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1270__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1272__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1274__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1274__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1274__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1274__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1290__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1290__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1290__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1290__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1273__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1291__Vfuncout;
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1309__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1261__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1261__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1261__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1261__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1282__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1282__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1282__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1282__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_0 
        = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p12__DOT__p12_pipe_data 
                   >> 0x00000020U));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp 
        = ((0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl 
        = (0x03ffffffU & ((IData)(1U) + ((0x00800000U 
                                          | (0x007fffffU 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(26,24, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1281__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1281__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1281__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1281__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1260__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1260__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1260__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1260__Vfuncout))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1282__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1282__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1282__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1282__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1261__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1261__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1261__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1261__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_14) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__stage3_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_14)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_15) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__stage3_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_15)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp16_sum_rdy)
               : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum_stage3_rdy) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p16__DOT__p16_pipe_valid))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1256__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1280__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1295__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1297__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1257__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1258__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1298__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1259__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1255__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1292__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1293__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl));
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1325__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1325__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1325__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1325__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1331__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1331__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1331__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1331__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 
                = (0ULL != (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1319__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1320__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1325__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1325__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1325__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1325__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_3 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__sel)))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1341__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 = 0ULL;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 
        = (IData)((0ULL == (0x00000000000001e0ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 
        = (IData)((0ULL == (0x0000000001e00000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 
        = (IData)((0ULL == (0x0000000000001e00ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 
        = (IData)((0ULL == (0x000000001e000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 
        = (IData)((0ULL == (0x000000000001e000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 
        = (IData)((0ULL == (0x000001e000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 
        = (IData)((0ULL == (0x00000001e0000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0ULL == (0x00001e0000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 
        = (IData)((0ULL == (0x0001e00000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1)))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1340__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x1fU)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1323__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1323__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1323__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1323__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1321__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1321__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1321__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1321__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1322__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1322__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1322__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1322__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1345__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1343__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__sel));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1344__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1342__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1346__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 
        = (IData)(((0ULL == (0x000000000000001eULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0ULL == (0x0000001e00000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1324__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 
        = (IData)((((0ULL == (0x00000000001e0000ULL 
                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl 
        = (IData)(((0ULL == (0x0001800000000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (((~ (((~ (IData)(((0ULL == (0x0000000180000000ULL 
                                                  & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                        & ((~ ((~ (IData)(
                                                          ((0ULL 
                                                            == 
                                                            (0x0000000001800000ULL 
                                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                           & ((0ULL 
                                                               != 
                                                               (0x0000000000600000ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                             >> 0x00000013U)))))))) 
                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))) 
                                           & ((0ULL 
                                               != (0x0000000060000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                             >> 0x0000001bU))))))))) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                           | (((~ (IData)(((0ULL == 
                                            (0x0000000000018000ULL 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                           & ((~ ((~ (IData)(
                                                             ((0ULL 
                                                               == 
                                                               (0x0000000000000180ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              & ((0ULL 
                                                                  != 
                                                                  (0x0000000000000060ULL 
                                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                                 | (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 3U)))))))) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                              & ((0ULL 
                                                  != 
                                                  (0x0000000000006000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x0000000bU))))))))) 
                               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                       & (~ ((~ (IData)(((0ULL == (0x0000018000000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                         & ((0ULL != 
                                             (0x0000006000000000ULL 
                                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                            | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                           >> 0x00000023U)))))))) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))) 
                      & ((0ULL != (0x0000600000000000ULL 
                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                         | (0U == (3U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                 >> 0x0000002bU))))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl 
        = (1U & ((~ ((IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x00000030U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                               >> 0x0000002eU)))) 
                                                  | ((((IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x00000020U)) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                       >> 0x0000001eU)))) 
                                                          | ((((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x0000001cU)) 
                                                               | (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                              >> 0x0000001aU))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9)) 
                                                             | (((IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x00000018U)) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000016U)))) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000014U)) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000012U))))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((((IData)(
                                                                   (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                    >> 0x00000010U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x0000000eU))))) 
                                                          | (((((IData)(
                                                                        (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                         >> 0x0000000cU)) 
                                                                | (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x0000000aU))))) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17)) 
                                                              | (((IData)(
                                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                           >> 8U)) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 6U)))) 
                                                                     | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 4U)) 
                                                                         | (1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 2U))))) 
                                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                                                         & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)) 
                                                        | ((((IData)(
                                                                     (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                      >> 0x0000002cU)) 
                                                             | (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                            >> 0x0000002aU))))) 
                                                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2)) 
                                                           | (((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x00000028U)) 
                                                               | ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000026U)))) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000024U)) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000022U))))) 
                                                                     & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))))))) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23) 
             << 5U) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
                         & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5)) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4)) 
                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23))) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)))) 
                                  << 3U))) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
                                                & ((~ 
                                                    (((~ 
                                                       ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3)) 
                                                           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3)) 
                                                              | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3)) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1336__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1365__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1364__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1334__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1334__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1334__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1334__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1332__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1333__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1335__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1335__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1335__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1335__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1351__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1353__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1326__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1328__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1327__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1329__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1331__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1331__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1331__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1331__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1347__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1347__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1347__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1347__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1330__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1348__Vfuncout;
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum7;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1366__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1318__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1318__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1318__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1318__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1339__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1339__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1339__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1339__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p16__DOT__p16_pipe_data;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp 
        = ((0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl 
        = (0x03ffffffU & ((IData)(1U) + ((0x00800000U 
                                          | (0x007fffffU 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(26,24, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1338__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1338__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1338__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1338__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1317__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1317__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1317__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1317__Vfuncout))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1339__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1339__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1339__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1339__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1318__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1318__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1318__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1318__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__stage4_sum08_rdy)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__stage4_sum7_rdy)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp16_sum_rdy));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1313__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1337__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1352__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1354__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1311__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1315__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1314__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1355__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1316__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1312__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1349__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1350__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl));
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_3_5__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_3_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1382__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1382__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1382__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1382__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1388__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1388__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1388__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1388__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 
                = (0ULL != (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1376__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1377__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1382__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1382__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1382__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1382__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_3 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__sel)))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1398__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 = 0ULL;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 
        = (IData)((0ULL == (0x00000000000001e0ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 
        = (IData)((0ULL == (0x0000000001e00000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 
        = (IData)((0ULL == (0x0000000000001e00ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 
        = (IData)((0ULL == (0x000000001e000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 
        = (IData)((0ULL == (0x000000000001e000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 
        = (IData)((0ULL == (0x000001e000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 
        = (IData)((0ULL == (0x00000001e0000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0ULL == (0x00001e0000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 
        = (IData)((0ULL == (0x0001e00000000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1)))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1397__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x1fU)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1380__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1380__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1380__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1380__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1378__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1378__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1378__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1378__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1379__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1379__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1379__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1379__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1402__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1400__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1401__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1399__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1403__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 
        = (IData)(((0ULL == (0x000000000000001eULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0ULL == (0x0000001e00000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1381__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 
        = (IData)((((0ULL == (0x00000000001e0000ULL 
                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl 
        = (IData)(((0ULL == (0x0001800000000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (((~ (((~ (IData)(((0ULL == (0x0000000180000000ULL 
                                                  & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                        & ((~ ((~ (IData)(
                                                          ((0ULL 
                                                            == 
                                                            (0x0000000001800000ULL 
                                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                           & ((0ULL 
                                                               != 
                                                               (0x0000000000600000ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                             >> 0x00000013U)))))))) 
                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))) 
                                           & ((0ULL 
                                               != (0x0000000060000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                             >> 0x0000001bU))))))))) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                           | (((~ (IData)(((0ULL == 
                                            (0x0000000000018000ULL 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                           & ((~ ((~ (IData)(
                                                             ((0ULL 
                                                               == 
                                                               (0x0000000000000180ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              & ((0ULL 
                                                                  != 
                                                                  (0x0000000000000060ULL 
                                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                                 | (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 3U)))))))) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                              & ((0ULL 
                                                  != 
                                                  (0x0000000000006000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x0000000bU))))))))) 
                               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                       & (~ ((~ (IData)(((0ULL == (0x0000018000000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                         & ((0ULL != 
                                             (0x0000006000000000ULL 
                                              & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                            | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                           >> 0x00000023U)))))))) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))) 
                      & ((0ULL != (0x0000600000000000ULL 
                                   & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                         | (0U == (3U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                 >> 0x0000002bU))))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl 
        = (1U & ((~ ((IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x00000030U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                               >> 0x0000002eU)))) 
                                                  | ((((IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x00000020U)) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                       >> 0x0000001eU)))) 
                                                          | ((((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x0000001cU)) 
                                                               | (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                              >> 0x0000001aU))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9)) 
                                                             | (((IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x00000018U)) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000016U)))) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000014U)) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000012U))))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((((IData)(
                                                                   (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                    >> 0x00000010U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x0000000eU))))) 
                                                          | (((((IData)(
                                                                        (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                         >> 0x0000000cU)) 
                                                                | (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x0000000aU))))) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17)) 
                                                              | (((IData)(
                                                                          (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                           >> 8U)) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 6U)))) 
                                                                     | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 4U)) 
                                                                         | (1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 2U))))) 
                                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                                                         & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)) 
                                                        | ((((IData)(
                                                                     (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                      >> 0x0000002cU)) 
                                                             | (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                            >> 0x0000002aU))))) 
                                                            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2)) 
                                                           | (((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x00000028U)) 
                                                               | ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000026U)))) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000024U)) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000022U))))) 
                                                                     & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))))))) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23) 
             << 5U) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
                         & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5)) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4)) 
                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23))) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)))) 
                                  << 3U))) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
                                                & ((~ 
                                                    (((~ 
                                                       ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3)) 
                                                           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3)) 
                                                              | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3)) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1393__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1422__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1421__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1391__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1391__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1391__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1391__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1389__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1390__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1392__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1392__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1392__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1392__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1408__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1410__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1383__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1385__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1384__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1386__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1388__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1388__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1388__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1388__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1404__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1404__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1404__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1404__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1387__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1405__Vfuncout;
}
