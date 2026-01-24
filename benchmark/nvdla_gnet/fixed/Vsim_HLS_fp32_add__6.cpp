// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum5__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1708__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum5__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1660__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1660__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1660__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1660__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1681__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1681__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1681__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1681__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__pipe_p8__DOT__p8_pipe_data[2U];
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1709__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1680__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1680__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1680__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1680__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1659__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1659__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1659__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1659__Vfuncout))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1681__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1681__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1681__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1681__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1660__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1660__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1660__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1660__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum5__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__VdfgRegularize_h1b022894_0_11) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__stage2_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__VdfgRegularize_h1b022894_0_11)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__VdfgRegularize_h1b022894_0_12) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__stage2_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__VdfgRegularize_h1b022894_0_12)));
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

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum5__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum5__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((1U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_sum_rdy)
               : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum_stage2_rdy) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__pipe_p12__DOT__p12_pipe_valid))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1655__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1679__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1694__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1696__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1653__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1656__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1657__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1697__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1658__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1654__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1691__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1692__Vfuncout;
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

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1724__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1724__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1724__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1724__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1730__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1730__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1730__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1730__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__arg2 = 0;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1718__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1719__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1724__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1724__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1724__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1724__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_3 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__sel)))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1740__Vfuncout;
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
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1739__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1722__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1722__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1722__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1722__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1720__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1720__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1720__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1720__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1721__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1721__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1721__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1721__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1744__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1742__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__sel));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1743__Vfuncout;
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
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1741__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1745__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1723__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1735__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1764__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1763__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1733__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1733__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1733__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1733__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1731__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1732__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1734__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1734__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1734__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1734__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1750__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1752__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1725__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1727__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1726__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1728__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1730__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1730__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1730__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1730__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1746__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1746__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1746__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1746__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1729__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1747__Vfuncout;
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1765__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1717__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1717__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1717__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1717__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1738__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1738__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1738__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1738__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__input_0 
        = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__pipe_p12__DOT__p12_pipe_data 
                   >> 0x00000020U));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1766__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1737__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1737__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1737__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1737__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1716__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1716__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1716__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1716__Vfuncout))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1738__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1738__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1738__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1738__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1717__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1717__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1717__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1717__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__VdfgRegularize_h1b022894_0_14) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__stage3_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__VdfgRegularize_h1b022894_0_14)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__VdfgRegularize_h1b022894_0_15) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__stage3_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__VdfgRegularize_h1b022894_0_15)));
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

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((2U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_sum_rdy)
               : ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum_stage3_rdy) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__pipe_p16__DOT__p16_pipe_valid))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1712__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1736__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1751__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1753__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1710__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1713__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1714__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1754__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1715__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1711__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1748__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1749__Vfuncout;
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

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1781__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1781__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1781__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1781__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1787__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1787__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1787__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1787__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__arg2 = 0;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1775__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1776__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1781__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1781__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1781__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1781__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_3 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__sel)))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1797__Vfuncout;
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
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1796__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1779__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1779__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1779__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1779__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1777__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1777__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1777__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1777__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1778__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1778__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1778__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1778__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1801__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1799__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__sel));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1800__Vfuncout;
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
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1798__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1802__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1780__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1792__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1821__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1820__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1790__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1790__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1790__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1790__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1788__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1789__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1791__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1791__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1791__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1791__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1807__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1809__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1782__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1784__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1783__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1785__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1787__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1787__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1787__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1787__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1803__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1803__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1803__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1803__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1786__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1804__Vfuncout;
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum7;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1822__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1774__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1774__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1774__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1774__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1795__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1795__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1795__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1795__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__pipe_p16__DOT__p16_pipe_data;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1823__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1794__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1794__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1794__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1794__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1773__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1773__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1773__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1773__Vfuncout))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1795__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1795__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1795__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1795__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1774__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1774__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1774__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1774__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__stage4_sum08_rdy)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__stage4_sum7_rdy)));
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

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_sum_rdy));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1769__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1793__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1808__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1810__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1767__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1771__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1770__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1811__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1772__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1768__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1805__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1806__Vfuncout;
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

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1838__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1838__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1838__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1838__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1844__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1844__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1844__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1844__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29;
        }
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
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
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
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1832__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1833__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1838__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1838__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1838__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1838__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_3 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__sel)))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__1854__Vfuncout;
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
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1)))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__input_0 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1853__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 
                = (1U & (~ ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                             ^ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt) 
                            >> 0x1fU)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 1U;
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
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = 0U;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1836__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1836__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1836__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1836__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1834__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1834__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1834__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1834__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1835__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1835__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1835__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1835__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1858__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1856__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_1 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__sel));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__1857__Vfuncout;
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
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__sel)
                    ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__input_1
                    : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__input_0);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1855__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__sel 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__sel)
                    ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__input_1)
                    : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__input_0));
            __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1859__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1837__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1850__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1849__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1826__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1878__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1877__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1847__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1847__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1847__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1847__Vfuncout))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1825__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1862__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1827__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1824__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1845__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1846__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1848__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1848__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1848__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1848__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1863__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1864__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1866__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1839__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1841__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1865__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1867__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1840__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1842__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1844__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1844__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1844__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1844__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1860__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1860__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1860__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1860__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1843__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1861__Vfuncout;
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_start_low;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1880__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__input_0 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__X_exp) 
            & ((0x80U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)) 
               & (0x81U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset))))
            ? (0x7f800000U & (((IData)(0x7fU) + (0x000001ffU 
                                                 & VL_EXTENDS_II(9,8, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_index_offset)))) 
                              << 0x00000017U)) : 0U);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1879__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1851__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1851__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1851__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1851__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1830__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1830__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1830__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1830__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
}

void Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt)) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt)) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse 
        = ((IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl));
}

void Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__sel = 0;
    // Body
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl));
}
