// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__1\n"); );
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__stage4_sum08_rdy)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.__PVT__stage4_sum7_rdy)));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1))));
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3__u_HLS_fp32_add_sum9__2\n"); );
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__fp_le_min_pre__0\n"); );
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
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1828__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1829__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1831__vector = 0;
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
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1852__vector = 0;
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
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1868__sel = 0;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt)) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt)) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1))));
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
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl));
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___ctor_var_reset(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_a_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2380236594467781804ull);
    vlSelf->chn_a_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991353141507009153ull);
    vlSelf->__PVT__chn_a_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13710593673808292217ull);
    vlSelf->chn_b_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16850365506322810530ull);
    vlSelf->chn_b_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13162467270669676242ull);
    vlSelf->__PVT__chn_b_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8307224015079505439ull);
    vlSelf->chn_o_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1477624943684843811ull);
    vlSelf->chn_o_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276632572638137710ull);
    vlSelf->__PVT__chn_o_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314530991929382410ull);
    vlSelf->__PVT__chn_b_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4422829178647546904ull);
    vlSelf->__PVT__chn_o_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134422164122515618ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7640466939626269040ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14873468963629817123ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 441122429183548619ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 474587403493523497ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9894156225942950209ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18398272737374018467ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2104979501503296576ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12043119842461900768ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16130401215151360471ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9925639390835539439ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3128918143822614472ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5724040571241286188ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1830707325094339359ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12339891420652423016ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14109080807999630472ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3590791065443182043ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16286952012054776375ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10295457980518563196ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2214718859126778760ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12336199201983098512ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6438958050426387337ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16922154863984132709ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16027392036483100892ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12045336164400500005ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6443987386951911513ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3156390715248537072ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15243208194117364267ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16507469799894828760ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14543656781852171190ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18402687401857456429ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10287517559014761270ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10704825474287325911ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4974261249484312062ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12161542666055947179ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14278659280934064924ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11507356871200627139ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15603542338976718540ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6034810126323407657ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5552156563304114030ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16850293892656491153ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6908071969790624598ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 272393428255346845ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16267273081799080289ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3734616084305844513ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15516800501868923550ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2944108394520705069ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13743472712959520491ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12022406527375529057ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18010316400625110226ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13413232521186064174ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18094247049718128057ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10078477221396845552ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9712453386569487393ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17099706918292435454ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18159852589750896335ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15555356189595930654ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12635145288535436269ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 915426963553418009ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13811892928250425701ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2443647108130341039ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6731891209970239666ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5432172616900842894ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12278177459537930036ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17957077059364242801ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2054931358966488173ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4868901218547871481ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6445093959010763613ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8597013772643787733ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3743107272565045712ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11601197951978084700ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6983151904689304311ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1444532107137798968ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9049956468996629991ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4198828818825498894ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15620216177644786299ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3287278238358925506ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11908865591518004253ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 16493912080628245769ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17939410669748408729ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13168646425731668988ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4896056591952680500ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8559258262071495167ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17645468862234636620ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2334835678852489530ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16962545184933145887ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3210352026813416331ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_8_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5146930775031870417ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3357970639506957871ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8593857110278028089ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3766313656952832344ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12968174463498532601ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1354221976917790270ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4934893478148622864ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7587666422331310099ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1164802232790769584ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2288050283609498482ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16500325268903867690ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3605865184591331470ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6292115123532313727ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13118889112817354488ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11650356674376496437ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13919352032903691890ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4048170041089857284ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5224359607056121376ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7134373522414852863ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6673209064858418532ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1462038821439141262ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10380841919517484420ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6357339724534419900ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7249612149962698402ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2934046900496697052ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12504090668559981655ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7692612773315754156ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17946437031965903115ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7883451837071982431ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9360748981497478393ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16905595401456483900ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 1919236362483969505ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6991449865203647409ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8944433471451392941ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12635656936144318004ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3817712389844127078ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3031946294232154824ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5107747185135479014ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 5949446147296185670ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9371374435141543482ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16304501792453796404ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6517018023832276645ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14694764945371426814ull);
    vlSelf->HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15101480661448079168ull);
    vlSelf->HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17134712229059595611ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15707968771586761307ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 538324180782397414ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13208817804727867900ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1147999433063365516ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13877667656769578104ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1080174167875425592ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15319398903743515792ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14748484914715013282ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8050060182613593423ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2516980439924077152ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16807779639072701982ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4777097188175889173ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2569950649502040450ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14317304150039397934ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6624895926265005284ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10218507494442312547ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4340486532660850622ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12112175009695417945ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15620094808647696197ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15828350384768369823ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17068284983687669070ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7743240894672501380ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9987560502579211156ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12758742416107360025ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17659434827798860180ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3058746861132118577ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1515522737720234540ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4868494554313155783ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18276332443628901434ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7358024477668771579ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15062414474622825546ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15364678315464006609ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7974853591554538912ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2221480674886556754ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 26458399703290792ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2563242928361569127ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7413339205897227985ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2903856862275164586ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12309896742389122114ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17389606723215758188ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14439907481709872647ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5339953793550007167ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12402463056990162466ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8853798849779835106ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15140843208859979558ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17158164788343467994ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15038775598226466498ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8901309009826457200ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3948893401774796434ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14529366021727346261ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18095114623470321132ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16285642284325218333ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4549232621264818451ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4601184113153672680ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10482214540032377117ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17905940385459163250ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8867075669702098672ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3087088964312419538ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8678194208517020689ull);
    vlSelf->__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5514977051869263633ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__6__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2829409279829286632ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__6__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1388026293436147677ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__10__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2134221992193536583ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__10__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8214521898030459760ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__11__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7238865797771065136ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__11__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8677181895826849836ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__12__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16105390485961134864ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__12__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 359241730691527237ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__23__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1010489982461565465ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__23__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4785189050135384046ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__24__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15377423465058824447ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__24__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13622662334049528206ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__27__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7454402807066906052ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__27__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16743732763675507367ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__36__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5593592368095314688ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__36__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16827738840697786548ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__45__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13673279937305008704ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__46__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3971818960351975304ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__46__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1401647060409154843ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__46__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14161145026722545093ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__46__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 907942049623950503ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__47__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1110664924351540485ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__47__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18241666964761518522ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__47__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16888851410119431253ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__47__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 560471030425173033ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__48__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13856716478601027899ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__48__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14464712116040101787ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__48__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9913706905793234381ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__48__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4002969354542113181ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__49__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9075093055436041761ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__50__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11014205628512811686ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__50__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1159801128804617475ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__50__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10738882837976806923ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__50__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10140591171917091208ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__51__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4799360095476002672ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__51__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1965191276964158565ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__51__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11085070230968611111ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__51__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13850726513494312681ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__52__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14022109479183284002ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__52__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13481642609841861416ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__52__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4139617115869915938ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__52__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2883994596045139317ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__63__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14698472056246300743ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__63__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8742326260714106701ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__67__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16704511949425908822ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__67__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15022656460897918464ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__68__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7675165450695883031ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__68__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15722587281674068624ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__69__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 5699280473309828987ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__69__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 184727645992224610ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__80__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11893132988499956433ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__80__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11073201045791436927ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__81__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12633176081836113861ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__81__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15546367761529228548ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__84__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12820397934228633563ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__84__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5147773728268585124ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__93__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8143417682570370970ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__93__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7070057249638428595ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__102__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7130698337988569326ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__103__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7424074451647577518ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__103__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14804375403900824670ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__103__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 163137343733318889ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__103__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7531254121840994025ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__104__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9065493241201233843ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__104__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10568559132742329701ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__104__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7983757859926492108ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__104__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8108829609715086365ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__105__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13470588460504743677ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__105__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8297607460637575943ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__105__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4361705957833603068ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__105__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 651625706315995191ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__106__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14190924353965451157ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__107__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12709764351526834545ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__107__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12031699580711801184ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__107__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 311303170475373069ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__107__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6051148210160301956ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__108__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4927233741853363922ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__108__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16448022990908327390ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__108__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7156526087528169982ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__108__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14788751047638909753ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__109__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 381776676582229497ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__109__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16963749405201505648ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__109__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12817365685265654160ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__109__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16141527967958666144ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__120__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13031989773121808262ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__120__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3582430111042050994ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__124__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10487657065894148907ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__124__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18364180406215246914ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__125__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13259741160272626996ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__125__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17300820747883539079ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__126__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 5550696369984974090ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__126__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6058261643129883355ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__137__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5244274138078309898ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__137__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12265028672306073460ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__138__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950607054481960172ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__138__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1144968495563224721ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__141__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3577166909617748256ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__141__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8854114539011942196ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__150__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9813227458410628622ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__150__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1979551431087663315ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__159__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9904386952048203083ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__160__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6649276567932939936ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__160__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 387581758391591212ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__160__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7769124553944507843ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__160__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15186249769248647400ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__161__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15389405624027576169ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__161__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8064495745176148290ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__161__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7644340762981616399ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__161__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 826743696683679275ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__162__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1503256154945529137ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__162__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4801683410070711818ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__162__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9059810771688492675ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__162__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3042215866013273049ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__163__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7006955057736130955ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__164__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7378470342749682790ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__164__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4550415262015305117ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__164__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9394097432023621648ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__164__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15149521479637190953ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__165__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8315969059485121816ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__165__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16893467313090859838ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__165__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13201866987447557893ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__165__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7479094586307255263ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__166__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8754460476176553491ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__166__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 507417899707109379ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__166__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6710756904488142114ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__166__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16878272185095632004ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__177__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3188098340294735399ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__177__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12280182302430421061ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__181__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3294091813443019579ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__181__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4513952876085464207ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__182__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17196472288507483422ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__182__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1484360912619600951ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__183__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3602816161015240598ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__183__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 921634620941499633ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__194__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18337709308849759182ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__194__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16109905789385231422ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__195__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18025648425288357897ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__195__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8656237369576933839ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__198__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16673896824121282112ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__198__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 824881915027684801ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__207__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11679544137258587239ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__207__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12920899609074254050ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__216__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8315798955667907221ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__217__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12383145240987933694ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__217__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6923417316300606343ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__217__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8868637042184462784ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__217__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 436773878395602159ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__218__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13287997064271714461ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__218__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8720146277510120175ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__218__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11198588505658256892ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__218__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2661697918163638715ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__219__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7683025220325226512ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__219__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7622309249902026495ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__219__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16198857456986183809ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__219__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4013953077554249835ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__220__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9672616526627897386ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__221__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6300109719520200421ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__221__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13216151757169896952ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__221__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16443249146290939090ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__221__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1988229470661740850ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__222__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16297368026322177205ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__222__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7592009146380192425ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__222__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13157523670380055788ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__222__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7134148318143455183ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__223__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5896348602070398093ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__223__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11968145157678578947ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__223__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14487787804817435338ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__223__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5400885567264023813ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__234__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6081524741427261395ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__234__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3165570199053383431ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__238__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15272996815748409951ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__238__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2172823899283115209ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__239__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17162164007023894769ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__239__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3653200268875790921ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__240__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16981289603271998837ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__240__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12131108913211843595ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__251__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7325921119107375796ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__251__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14896249664925940323ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__252__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10981085063535103656ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__252__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14786704893315436330ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__255__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10100665805666379476ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__255__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11394225498921342144ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__264__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11117368800996076953ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__264__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4227385768429673758ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__273__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14686576925875535598ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__274__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9662965168646497701ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__274__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13864084017730961714ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__274__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6472851867412988768ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__274__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12228216062055136366ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__275__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15421048441373903511ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__275__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5934291455741746144ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__275__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3368673186006328950ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__275__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14562108913191334140ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__276__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5613991020314402917ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__276__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7405139642368398398ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__276__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7705759905379060904ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__276__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 165943172289483237ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__277__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15419998422749450234ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__278__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10796877884089240216ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__278__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17966975324720659812ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__278__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7011403692472472588ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__278__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17663765133170593956ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__279__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7695996244609787502ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__279__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9936443174230406553ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__279__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4503458373158727857ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__279__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11512629764962795511ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__280__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9024168586840463618ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__280__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 334195369689954802ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__280__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11593933335457588629ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__280__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15133357843828433676ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__291__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9143590142376830649ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__291__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3072447950303782613ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__295__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 994421094720916145ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__295__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4940878916849216692ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__296__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6670167864632941323ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__296__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4216557656575406655ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__297__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8787317609757470443ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__297__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16553906196025048294ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__308__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11659331375004573396ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__308__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1536231437580314262ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__309__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3276255646560135331ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__309__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17504802454409157873ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__312__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6766299375958174928ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__312__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 388082237771944449ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__321__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8321975557542522376ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__321__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7111088720201729058ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__330__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5827544082227650502ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__331__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5062996092793948777ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__331__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3417129758904106638ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__331__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15585547782167245095ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__331__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4766470819897355432ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__332__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9471233281903545576ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__332__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12624131048647979657ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__332__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17739609569411407890ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__332__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8255157992107573807ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__333__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6494743745571482452ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__333__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11738337022672638734ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__333__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5912309308654103268ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__333__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5211051503868148313ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__334__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14437553208519486099ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__335__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15574592857927711216ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__335__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4725299959961927653ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__335__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17175162083196421074ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__335__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16177168391017162520ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__336__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8711295853972293170ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__336__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4783295791328717577ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__336__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5249822785402161336ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__336__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4955600513428950683ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__337__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2476159295065183785ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__337__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8614440246116937738ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__337__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12112988022068249434ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__337__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9687260497094140412ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__348__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8755223050877371577ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__348__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12147786838489262572ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__352__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 5625429007494770986ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__352__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10128726700852135205ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__353__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9338060905882541614ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__353__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 676217613570519036ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__354__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12912743946693129506ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__354__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14488703787478551404ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__365__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12230341689841297213ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__365__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 948133051736211388ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__366__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5500662768644499779ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__366__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11116908097661766073ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__369__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17098329735155286623ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__369__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4824780669962853321ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__378__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11090429209748086690ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__378__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10754480846000003597ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__387__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18440257407027440123ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__388__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14848655880514361966ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__388__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2061261034087772292ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__388__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7924835747773045947ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__388__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13827145597297824553ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__389__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4681117193099069481ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__389__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13436581771666316348ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__389__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8441151714994960833ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__389__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10055725717681780909ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__390__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3112938120586201498ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__390__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11914222741323646392ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__390__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7884451027345965499ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__390__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5080455381017678682ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__391__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13935995355152258645ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__392__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16232609932293246064ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__392__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18404360585081224651ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__392__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3014454474152417295ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__392__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8304814891390218242ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__393__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3629363350095170353ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__393__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2104462462031151230ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__393__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4339296344077988667ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__393__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1413129574038070179ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__394__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5460423762131078656ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__394__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10818273849756630261ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__394__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5592876928881419692ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__394__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12424636913158642729ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__405__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17900626384663451341ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__405__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4281180757951138869ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__409__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11868699218727168096ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__409__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12602219804084230252ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__410__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1480308526238156715ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__410__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3278250339766141698ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__411__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13490794012213598166ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__411__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3184885832748775998ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__422__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2435208927527733922ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__422__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4339786395403441335ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__423__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17122307192477660650ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__423__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6741473653968484808ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__426__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16408821980970905272ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__426__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12370236936989225401ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__435__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9354813171170561828ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__435__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2084058801452312827ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__444__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15815450569671710163ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__445__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15794385562907949688ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__445__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8300463764063730422ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__445__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6613704281539538894ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__445__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2158123797539735025ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__446__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18162721761417232892ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__446__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8631772295773050837ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__446__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6604452355019593026ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__446__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7571984588830010173ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__447__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13061318449939657870ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__447__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2301151982689346379ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__447__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5628179600465524673ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__447__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7126008403365485260ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__448__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14778693104038795522ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__449__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1429358012965168835ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__449__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6744361108314281041ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__449__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8434612674073329551ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__449__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3914981368383608741ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__450__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4257931333683356688ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__450__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3667068087674958554ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__450__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2919774901927516025ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__450__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18022092310738047780ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__451__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15538013113895744261ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__451__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17081224340854724765ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__451__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6243484744060872460ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__451__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15761976082187959393ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__462__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15317631709110955663ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__462__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 342593778484740521ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__466__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 47853862415381527ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__466__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3919164704878912853ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__467__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4049682257504827269ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__467__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 701764577385785060ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__468__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13019663461808647878ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__468__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16817601956289876422ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__479__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14557495487857311965ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__479__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5518318600815214112ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__480__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2777932413167543972ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__480__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 375769553777932037ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__483__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9229450893965735033ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__483__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9253065916384682356ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__492__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6944299688682153556ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__492__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7993632140195534651ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16385260207806662995ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12707961338554750034ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15284800116665087360ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1325390165508258183ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10408653059930748064ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8746804510834048538ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14189248078973667812ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15991461832225246590ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8801414915230413566ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18116935973346475128ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 12290799173563165523ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7139146880320586556ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10523690499689826640ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10419458583190389453ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17991716282528437227ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10386419986007290390ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1234854728962808155ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13643971696108500913ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6145616783583354685ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13721539112853217463ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15928078939788178214ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5861133776994491332ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4605547270620306114ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7920329747712604118ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4184936310135340414ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10282706177784131907ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__519__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3211298807767471338ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__519__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18327556303689979206ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__523__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9785743292701817291ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__523__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18383336973354449950ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__524__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 507699676207870185ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__524__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2269600504167123686ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__525__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 136144350175593425ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__525__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6323949664353192289ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__536__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16341362389283762798ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__536__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12358995287395461878ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__537__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3007325611439009401ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__537__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14654752803443237284ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__540__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15125676721014888168ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__540__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11566631736618404190ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__549__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14093968085920416045ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__549__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2690180643720331790ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2942701186376882083ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10265682331889109040ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14015688275372679715ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16699665215259074305ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10337173400529278330ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16860624886415825653ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 782637108282404909ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8479331371693392576ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18132743827245429441ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15950028388927251036ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15188610645494918653ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16831567856807015637ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16162746104218479242ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18209186410050530825ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1289255333980485812ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9460110737480634649ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7398675052979943432ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12717004067811677143ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15154838531424165015ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3413639228245184283ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16178058690632573111ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9571445238150279016ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13647978460704353587ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10704437725698052694ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14403140254847441039ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15549589690998247842ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__576__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5175815775626783243ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__576__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17557778130139136315ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__580__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11095582526770304396ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__580__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6694130221970195449ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__581__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4983360677055249275ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__581__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6387213484809535078ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__582__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7499990502776068046ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__582__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6617318924033568382ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__593__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17258147934929979678ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__593__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8840394967398992930ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__594__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11608983218887146147ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__594__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3049677055950288889ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__597__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7493645456465937292ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__597__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9582185562407706711ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__606__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1614741049859611691ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__606__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9087266892017386510ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5169541935390524438ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4979550323661546553ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3675058857456154182ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4746592292227185556ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1544735111557330418ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1904456783069272247ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3379761003072588100ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6181328480325875137ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3193265688854052051ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4739448817026118126ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2886975374127269233ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9413927484461455639ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5780672311270644574ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7072323710637304199ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7313778979107020263ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3995355612260894465ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14197783940629727456ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11297409983706320820ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15195799277916200007ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 983557967116634101ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1588121157562805921ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2379285680576661693ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8730673275990028713ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13391855700763372127ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6973272504502636239ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1480976665929304560ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__633__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11144716629559415191ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__633__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3873642551382306448ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__637__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4035478779839608559ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__637__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3782256630266409852ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__638__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8044992878082798572ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__638__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3477349750989385365ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__639__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4497629416785442043ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__639__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13437484642996716626ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__650__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7704248593747254469ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__650__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17190672634012712280ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__651__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14433185985129097649ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__651__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18179768681846938491ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__654__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7968198894365502345ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__654__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15277448552916228918ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__663__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11057339996742375601ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__663__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8348290771138116251ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11742591001190130104ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13133157606969410855ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12837921403842061439ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1352256659457781289ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7407877544636884905ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 788779247264793056ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8604633121431061960ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8757592391129380808ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4065581722849910253ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10113843567209286428ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13963030116078809158ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 146167456478062227ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18338065550019301014ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8517011759221382784ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4915800754857840425ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 971450660059942453ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11575965681197533187ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12128027096509516521ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9761251552296583129ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17797954266952635979ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18260799347741407487ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10491447606303902620ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16923602737682530666ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2754787163649098641ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10859013544158911543ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11385209415280117883ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__690__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 904510753153280496ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__690__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7559590881543405212ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__694__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1117558229140836342ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__694__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15854911417859175704ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__695__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11408973614632043873ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__695__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12005608484490765515ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__696__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12876579539839028213ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__696__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9963265537498056582ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__707__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18048768800046282558ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__707__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10977730001526822473ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__708__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4275854580607181435ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__708__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5757139163387085775ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__711__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 610481782505243985ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__711__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5498094315633176961ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__720__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9964863826932144000ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__720__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8277610280054632713ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10692462644985675385ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11119136616387893052ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12481713187496487316ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11260558751624374788ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4652107859508003012ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17348764570695807986ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8189969164348995204ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10407203786798520154ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3371394505745664212ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 116693430357363853ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2434229026312997202ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3039104826449229890ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14556830934870159440ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14546500908913081093ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2130735356860887456ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12980377385580011779ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11069648986338425091ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 58582883568182078ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5753797032918918529ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11979193950568012693ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3360555315279526834ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 42512290806569083ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7357386018222765825ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16026419319958837322ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4699015057842408038ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11022467863678498494ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__747__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1217181101779036800ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__747__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15000910297968140042ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__751__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1381678356288497729ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__751__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3173105773812245015ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__752__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17678757562414294073ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__752__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1209800903422554229ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__753__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6376388458838644300ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__753__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 234749895302778992ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__764__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10567272286631256540ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__764__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9624576023131314532ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__765__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10221705566162780763ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__765__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8709871965692527992ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__768__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10544281389734485298ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__768__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13720863325732258549ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__777__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15786560868933874172ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__777__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17648927660641696357ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 174001963392647241ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12133463465256309760ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6254178067672582711ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16753451980244285357ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16554856956139758232ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14528584469319941933ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17788903888232916093ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14975442835954718417ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1826636334081695588ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4215161975908636993ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4792138949127665810ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12112675699943206275ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6567422231035501979ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 270589281911450727ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2064172817147759900ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10575230635413871593ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2049676446123695067ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16949196989157885263ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14513369755647239788ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13384493501256459327ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4871095974533881086ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16808527547800607342ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13362117076520603913ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6142175915844946116ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17401913881612563816ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3108498568422655800ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__804__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13967125113562377937ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__804__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 621361493854536537ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__808__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17414585283389873585ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__808__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4021129317640386533ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__809__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1461269205680428072ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__809__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10184722048537994656ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__810__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10229973051047674535ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__810__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9316327503007348402ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__821__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5904312951032496908ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__821__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1837016254435572653ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__822__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17182767365003458864ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__822__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2731840855726243091ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__825__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6937799119867531985ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__825__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4043015477659093382ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__834__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1389273690498721934ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__834__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8220127839665729445ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17560191873401236864ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6612331492955290340ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17398760248652206953ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14420652293936317540ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17979528647241212045ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12715551596231611666ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16731362490698830152ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8129886023386808385ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14327872677590381411ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12454445646865715119ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15379369549497366123ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15356897799966972724ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18253956496456530746ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15546536157361939316ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16658996899454772276ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5755418144156539344ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3941825242198609242ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7717989581831608543ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14099329941765058669ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10028830104836484020ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11831043858087967747ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17423007050887411097ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4354180657479128103ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1580891921369949617ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11021898011909483400ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2024805540562963532ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__861__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10176481963471197743ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__861__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12651044869005719348ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__865__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3332426969508613582ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__865__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1678204838395493776ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__866__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8068831819375632150ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__866__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1151088559076525623ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__867__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4816972269120762545ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__867__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3467450709754172503ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__878__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11587779262039243095ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__878__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9032829639157157159ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__879__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15162607912795228429ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__879__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16125368370589195155ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__882__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9133896901296374522ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__882__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13168711715339047102ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__891__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3665171255364748460ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__891__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2047723357916790214ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1838273775700663601ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15998516568351970321ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8230805751521623431ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17121799705616165186ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16370917225518273589ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10637318907399161604ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4890712513164445707ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16199056330041325564ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10467431400607073271ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 723302689916343620ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16034419845319807509ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15466234953611524402ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17173359760689389852ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16266148766015188933ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17113977155701026206ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4924034926473842956ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7736952836673229733ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14120650108239810659ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5204792128166175643ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2116599791554342685ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9958828844126188927ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10019561547642515845ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15712522899577362722ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10605816941726301581ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13809986441277210724ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14894187597863485629ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__918__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16905292900579994860ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__918__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6757522159080834860ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__922__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7468787395236791611ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__922__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1349179791171188194ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__923__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11457012523937584582ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__923__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17653828858642876018ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__924__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2234465307866366827ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__924__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14710045531782650656ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__935__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2051587932965528156ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__935__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14426352227641383517ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__936__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8358380696278631224ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__936__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3073541042604640428ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__939__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16284692709930476186ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__939__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10388421140908314685ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__948__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13081800026849293331ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__948__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8007623519026741812ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9244278210836377186ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9266195024694991999ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14076537965329050937ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17191673166957419004ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6933544016989855465ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13946104064873825010ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12172952665904854278ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9608140625790915634ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3220367611215479556ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3115607062158775932ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 18301906586018440732ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14750870591865669683ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13601028441281718808ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13991712109626748392ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12893000527022967731ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4161525816969608753ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17388575036782045037ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3875172747433074410ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5281027868501186730ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13761766579512368723ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18232680887295567998ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16766751008547686426ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10147091641804322593ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1229265745668355212ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7891047105749934317ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6167318564183058628ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__975__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5759133762749151469ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__975__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14417807925792815560ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__979__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15218441998063967707ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__979__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17227363833626109505ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__980__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10526292616559065480ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__980__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14153459471903428680ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__981__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2645886641628107944ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__981__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3627470256911040010ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__992__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7956718205416230037ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__992__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10864255593739634804ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__993__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12253094338475791845ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__993__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13762140774254538920ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__996__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6952446636160144877ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__996__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12822747231207899342ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1005__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15958480929449733666ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1005__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7700544470637662585ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16715685047810082351ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2283855964771085597ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6399664992922336812ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12904524460300158481ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11162011115331728384ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17727219914804667913ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17266204921534284812ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9991683776005629383ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2756111595137582195ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12964533009319470075ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1976512809749002624ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6770905967653641254ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17895793133803333705ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10540047113016601448ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15856758119923556738ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8508748708824937519ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1724669742480158324ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11179991603320036306ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6871968569779958824ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10964598512250400962ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 504115606267951205ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9453541454813025961ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6527076171885909409ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2930435888528574017ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 122910825050050843ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5036356400785762203ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1032__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5231553155285767835ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1032__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16922481911441356311ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1036__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7464436133481285202ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1036__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2933076694974819625ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1037__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11756598911641882518ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1037__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12652934122717611787ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1038__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 18136712061508177736ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1038__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9330273644615407865ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1049__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14851550751619922266ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1049__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7267788404444354318ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1050__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683003186045965750ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1050__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16402751017435606167ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1053__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11120139889809830587ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1053__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2527834252570280470ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1062__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17306539666557154244ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1062__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 995857097814890892ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2253160728902796545ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6655767057875215934ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17665786306866606864ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 167607501471697629ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7985274264098063137ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17338024602804135480ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10880928786654641248ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6799160027285883742ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2063441944470894068ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2812650575513445035ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15916357132530914206ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2471479309248081686ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 595349781222828938ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4292707613088419598ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 881466443322121746ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1409216893122318730ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12277836107397327389ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4536810862893348741ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8249732677340332983ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9244934043479317380ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18111745135382994604ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 853403552916351494ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3768795380198068551ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14451171732504018438ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 938084331187594643ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16514727935829875606ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1089__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15425595726017091863ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1089__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7511630402373594776ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1093__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 18280842272578255458ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1093__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16434823735772400143ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1094__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15507939873758012355ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1094__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2382639222578825645ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1095__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9876288904794261129ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1095__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17128425061933755406ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1106__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17133083566962558645ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1106__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6909996930362659563ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1107__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16909355064956400026ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1107__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8345631720088799849ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1110__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15399297815999051247ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1110__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2809662741049537740ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1119__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9485763350196818220ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1119__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12273435956010215373ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4509061347299979449ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12442166150708979942ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5309438574594402176ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5275639126864918093ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2181145986950365506ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2065307506541797388ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13008238118595442248ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14217890162240392267ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1313907231925923990ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3373650358184917709ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1142876145308341652ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9642126786402214840ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16477002135635804164ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12498317131699059988ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6461820028373120566ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2983674364387610098ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6595003067062793681ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4802788976502208895ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10516606603131316994ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6969275019641172559ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4993108404066760532ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14165644393610093449ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10612488711392375008ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 122133525828996703ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10853750640214064186ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10972017053725576967ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1146__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4910064889323042624ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1146__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7182544384725072966ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1150__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17720454851761235050ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1150__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2507599423030274194ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1151__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3085315831755492198ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1151__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3107680400856833207ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1152__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12823695606056725613ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1152__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7470805468616475637ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1163__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3589598305381218037ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1163__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5762486932781635363ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1164__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13348268632148833608ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1164__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15272318567863445767ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1167__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9210667125965422870ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1167__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6154682170282156868ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1176__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14400582897777492464ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1176__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11471390911427890374ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1185__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7256027871942891332ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4252344348407570472ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5230383150213998306ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4943195505599561038ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1186__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4221336239227158999ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16812022517736411212ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2596360897647171710ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14718369335224505753ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1187__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5061555118477705685ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9325459851868645058ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14525657871719015159ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12889471056163886417ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1188__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6309881975861191113ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1189__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4705093946251743840ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17608892828949175928ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14987313419617300948ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15321432044161400093ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1190__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 831459117004110457ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8986781399338925797ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2363343164442981269ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1486866824615392570ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1191__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9608323834425148331ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2328372195383618688ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15249351482131263487ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15390817730327109650ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1192__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14221585597198179737ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1203__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16919895656734329953ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1203__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11038757748725633543ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1207__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6430110242455899196ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1207__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2966909103630626258ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1208__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16104065679870671411ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1208__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16266054763254205846ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1209__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14445296687500276137ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1209__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8431684118183007559ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1220__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14311944909915280585ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1220__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11831193703636621681ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1221__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 151464670710002183ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1221__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12735800852110447406ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1224__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15650205099612485721ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1224__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10919874011000772319ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1233__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3963790822318200634ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1233__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5580121679291857176ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1242__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6712373800861716145ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4275383178474952230ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6651432811110338549ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6781712962751928393ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1243__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17283272217037821499ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12233648367087798075ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8565734505401781575ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3453996696534571195ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1244__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13388494097663860297ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16434106659225277678ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14088522211183502538ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8986955811882433587ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1245__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10732333698614186375ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1246__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15660687057118195258ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9636930624115800663ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10177230781102853817ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16071880705802936754ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1247__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17532963921207747670ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4480125816340308783ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 125761841332217469ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16512867442030817220ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1248__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9324942651325682997ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4954229239367657816ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17297406129344082157ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2222414803731461142ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1249__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13136744439574521037ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1260__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7989838458376270866ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1260__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3942311339863569313ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1264__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9449582177630771860ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1264__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2031348028489721402ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1265__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1282538150557111534ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1265__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9642844613822300864ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1266__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15597864539851456495ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1266__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8177464613737230790ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1277__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18374293147053231774ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1277__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3939642366510043348ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1278__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5778539634984846766ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1278__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1637631826277592303ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1281__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11782442505807035775ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1281__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1888383758412197926ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1290__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5784410747029909923ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1290__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15621467775665984791ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1299__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7395474944785445704ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15488198127391212483ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1045442997257786651ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3882270456968073615ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1300__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7289603548662364523ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14680120764556467003ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14548081207558780519ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5520294901365021668ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1301__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6390439640004974127ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5898584165507839152ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15073032270920754914ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15510727869697675247ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1302__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10997695891040069365ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1303__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4316888543598842632ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13427195965384455862ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16464760451925723061ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 117660986329556055ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1304__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4836345111668253812ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13472162969645192185ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2949825563349588657ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8488256605978196719ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1305__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9038562821507817393ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17525120440594182608ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1909527044308163590ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 191981806411051798ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1306__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5881268880838029368ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1317__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10615184412996713895ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1317__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15017616716227830494ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1321__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2511102131451697148ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1321__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16680398708624150813ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1322__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9300154834172359704ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1322__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13270411504737524504ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1323__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14946857026115787728ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1323__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10343509162906914413ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1334__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16810877558344274211ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1334__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14381295136613382487ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1335__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 954484773793428811ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1335__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7138357876495100497ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1338__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6848495368690129179ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1338__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16029518032651340413ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1347__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5864927342826802418ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1347__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15726574591100645676ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1356__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4541141439616048316ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 170723613754678043ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6570651461411226110ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16204017956263336079ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1357__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10168990250497423504ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4796687163030959648ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10363047159630641714ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2821675278618774865ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1358__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1366123137301321448ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16161604522716258917ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4904042366097664668ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16195386270037768118ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1359__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2288597382570540921ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1360__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14373586615681130872ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14225356470475304728ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2599819668579009906ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16156825298623308708ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1361__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10630393933454791266ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5342107800878606481ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8886949783229590825ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8852620083209503335ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1362__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17380364043709292035ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14316086154742435633ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17398568694344321453ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4108897159792689123ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1363__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10584397521798084979ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1374__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15427877038961898574ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1374__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2993755640490512755ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1378__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15473132957849915585ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1378__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14206114235713715490ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1379__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15523119480293257044ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1379__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7041641210305740415ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1380__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15359364693082208723ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1380__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15638739726614833180ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1391__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16964435334111521836ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1391__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5709105191070805513ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1392__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16236910964812682950ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1392__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15941049338480438326ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1395__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3131317921724151025ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1395__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5045862072899214922ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1404__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16129549810712127570ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1404__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10871068240639197789ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1413__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5596626115223166525ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14656820569411769141ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17302779223438031890ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5406233518537192829ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1414__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 433880771652024680ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1898547321685102139ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6605798920264278173ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13816176977322180836ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1415__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1078334291469551043ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17399002670957396151ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7149029205589495865ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7593341901065941442ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1416__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9782157201591186362ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1417__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10127451291224858056ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7252287840035731093ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16751971401420294449ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13404801910250653224ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1418__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3793320660760809017ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5737043619229659751ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15998305603659454393ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5477144866802177817ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1419__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13591036093378028425ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10686869985363956708ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 59664676498255282ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15803082675686600147ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1420__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3230983785915173665ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1431__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6159829639025652928ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1431__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12256899237201409525ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1435__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6186754598346310973ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1435__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16677069872190457472ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1436__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14512626267905227949ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1436__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3426726300251704987ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1437__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13572936487494025546ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1437__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17256299810316692535ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1448__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11252811473945864216ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1448__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14629637660538151308ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1449__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1762212351933954429ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1449__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10589142708936340072ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1452__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14380957100123350298ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1452__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5086632997012631188ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1461__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10061648542247499600ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1461__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 373982036796460282ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1470__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11676050953959785ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1471__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2268579256824268482ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1471__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10102297750069762596ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1471__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14600191378887806492ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1471__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6658577776355120341ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1472__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16749535103499025315ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1472__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6368154240474443868ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1472__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3601615310079192474ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1472__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14660141302678570556ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1473__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5666892805371623815ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1473__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16710880740322099336ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1473__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14194651109721294088ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1473__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16252570856966082024ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1474__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4881384248352051061ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1475__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10252100401660477435ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1475__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1038872074373352951ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1475__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10736483927911077890ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1475__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14890722684042902833ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1476__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 724335130890340346ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1476__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9600449022425935105ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1476__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 851316802254118897ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1476__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11829638197377208868ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1477__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11893220397456989397ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1477__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16995102071534899587ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1477__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3126536493503575980ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1477__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8712865052614777701ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1488__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1316106630300906803ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1488__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17827168373174199644ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1492__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1859690241315743587ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1492__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17781202609684285618ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1493__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1504254464663265501ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1493__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11632009737373648604ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1494__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15963408966481977865ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1494__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1574366563287948115ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1505__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7936178704311639544ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1505__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11355118869622938020ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1506__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10481929791763990238ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1506__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16456611073853223901ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1509__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15312909531801438342ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1509__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1115204282234887176ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1518__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6465978364458096198ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1518__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9042434704838722318ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1527__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2843358300714281818ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1528__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3158823541686008825ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1528__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11632302304557871626ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1528__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3240768944040086828ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1528__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6801679343419346918ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1529__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7759728141012348098ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1529__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2082239384854862340ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1529__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11800632764866029809ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1529__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14950656463754525218ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1530__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2290360844358388812ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1530__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15810611767109744767ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1530__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12810603259404953387ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1530__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10354865201398494687ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1531__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1367917935819697494ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1532__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3683546965943484291ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1532__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6864511862680905072ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1532__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2945163514623874072ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1532__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4612823790599334028ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1533__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12766562534955010055ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1533__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11021274244034060900ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1533__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12647971772224205776ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1533__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12599589180230002317ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1534__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4529724157531936495ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1534__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13422928680687308104ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1534__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17382393311430030342ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1534__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8926398474710775419ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1545__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14374029197525848715ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1545__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6319088895276341083ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1549__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3081945188786360525ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1549__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7552482356078929772ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1550__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13009626221028781915ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1550__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1634333701079541292ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1551__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3556203128872463388ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1551__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16287013586216522064ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1562__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9701323209798424219ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1562__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 795862607489081721ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1563__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16510784263531119923ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1563__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6565200297844425348ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1566__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2171163790388969277ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1566__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 18376086623249201729ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1575__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 835075480888745059ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1575__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10708540355831642160ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1584__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1737334542305537836ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1585__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2084123359894072908ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1585__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11784743892693083403ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1585__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6335937708831455058ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1585__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10781847188853335648ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1586__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2166269403451927957ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1586__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3024670106542583727ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1586__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9249324240418874547ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1586__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16027685876238472646ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1587__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15424646854771562914ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1587__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11836041997760460028ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1587__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4709251941704537552ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1587__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1461614949366990389ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1588__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6277922210921690459ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1589__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8184815638090203046ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1589__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11936679093363788550ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1589__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7380051134077023236ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1589__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3009807263998528919ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1590__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 363235338718840282ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1590__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6950467928557860327ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1590__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15297015699673532133ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1590__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5413758800722030617ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1591__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14582750935958536235ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1591__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4792549229613992002ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1591__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16839893691894425066ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1591__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4101479803188072761ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1602__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10848580659150376339ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1602__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16587052198808042953ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1606__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11846418247806384042ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1606__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10793441875952110401ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1607__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9611479363740201775ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1607__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12794387338564037970ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1608__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12171130194113884303ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1608__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17888136214959296779ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1619__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2912873281684752865ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1619__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5529592880298405075ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1620__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4675963741707800027ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1620__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3968065851855157899ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1623__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12062656617121460422ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1623__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10066732034313402174ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1632__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 4589846982184821898ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1632__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2739741341787793231ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1641__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16746846521332503808ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1642__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16229097158584982445ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1642__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9075148100462006493ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1642__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16318072093634698006ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1642__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5367024159734817579ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1643__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 378754606162241184ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1643__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2476592399420146517ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1643__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14304892133878547023ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1643__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17582706213632303780ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1644__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11222587230135364141ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1644__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9975453013944794031ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1644__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16395769503194525946ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1644__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6988784438103096254ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1645__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14091074598739967614ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1646__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3458201400782521752ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1646__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17555578093868133059ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1646__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6119188393695538949ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1646__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9128854436615007780ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1647__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6324786695531072940ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1647__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 225635493771097080ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1647__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17125302056569099301ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1647__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3183857702872666587ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1648__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15247611132525407103ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1648__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17623392297593344053ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1648__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1841515558398997494ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1648__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17560556090743305468ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1659__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17181864531924501555ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1659__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 621773525801672238ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1663__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17280789482529511713ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1663__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9098459096508246011ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1664__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6988144105460444365ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1664__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11356024558396098958ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1665__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15485720619778714591ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1665__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13921388539130148950ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1676__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17667094073935289110ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1676__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1940558944376969463ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1677__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1147391134743057602ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1677__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15321874080985201460ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1680__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 373859971785210408ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1680__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5363211718752459515ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1689__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3979069192097797289ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1689__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7656594160533150438ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1698__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4413670390436218ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1699__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2893361975050135577ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1699__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13014385289016280354ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1699__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4390920501733392940ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1699__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8822069821950222237ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1700__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 645412568973069911ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1700__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 888562624348572449ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1700__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5074088354363918164ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1700__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5181914158618013363ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1701__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3880374574758390800ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1701__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4221567003917662482ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1701__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12768468579168132926ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1701__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15912031488867419442ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1702__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12926621404689141814ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1703__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8959848971190255439ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1703__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7937345152001658557ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1703__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 584546916000954134ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1703__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 82030175745441715ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1704__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6827665226835806056ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1704__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1435535097242354211ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1704__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4498115272340578749ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1704__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9373149030470462511ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1705__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7314515280053290168ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1705__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14101649178183956003ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1705__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13451356625704441575ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1705__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14436707227994539138ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1716__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2508285425039598033ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1716__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15389180976448656833ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1720__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 130262070976388616ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1720__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1102854601122487936ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1721__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8427983784583701372ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1721__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17578885909486543238ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1722__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 18182209624421019266ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1722__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12040399123107221095ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1733__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 385166007953432163ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1733__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9085740467886140879ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1734__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3278299403460701462ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1734__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7311723994121397634ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1737__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16258049447433054786ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1737__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10096323440879651159ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1746__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16060725173649560394ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1746__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2043861248729063973ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1755__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13540998977587526254ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4390861776324481901ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14928113944949604469ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3712566505547602478ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1756__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4220930716704555078ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11302103224862756745ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9023383872333037568ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5537298400714272881ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1757__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7802168934323621293ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14848220302895524421ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4962653896678020562ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2866479498253515767ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1758__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4962191345345624512ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1759__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5381636857394368754ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 263646328129176222ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8614851481147902235ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12905194117896491452ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1760__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5650578610461040551ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10867486227704103183ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2795405468008979279ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17147338665341109169ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1761__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6795578623208466761ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11239022166836597533ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17435990402559902105ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14192256243122214591ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1762__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13959961313036560551ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1773__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12308353054989075726ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1773__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10238546944391243473ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1777__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10433668403746137930ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1777__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17948325262460581980ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1778__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4417764601892502100ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1778__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4791948993771829644ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1779__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 642265189400738048ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1779__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1536571418845843240ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1790__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2298518146848294885ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1790__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15778104160952945267ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1791__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3945242833005745655ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1791__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13945734570179363466ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1794__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14920887223685331813ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1794__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3059010790868956938ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1803__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12644137852222433978ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1803__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15362478996170472359ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1812__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 939985690423831556ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11383731538625957855ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4066615423725413388ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3651956166807121180ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1813__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4259014246071151230ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10750665667079514866ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5951877941745947030ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14385428047332791829ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1814__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12763624550519379626ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5440924575334743080ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11188088615189101009ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5027246557766177554ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1815__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14880753252188084107ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1816__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1828392991700442115ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 486033132736662964ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16806345854368635204ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17062855071601080127ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1817__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13920088472194350357ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 547140092875035883ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3802017226419068960ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15653254088673377978ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1818__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3668182632516124455ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6731149094041945370ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16808347454254292007ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10804071333943768682ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1819__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15145292532778161835ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1830__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4379864220125683034ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1830__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8136238457644768837ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1834__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12457283291995814185ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1834__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4852927747206363779ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1835__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11388840722076721365ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1835__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7902207190832052738ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1836__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16579718514452074682ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1836__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 507005676095477147ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1847__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15094831973818330131ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1847__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5345088579953955877ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1848__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17683378095305520322ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1848__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7788026140793733519ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1851__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5531354472630834222ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1851__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1577763386439159641ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1860__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14068940176677608568ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1860__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14418110400551396381ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1869__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 658252223227296152ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16635982841779371774ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17248972068815330277ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9919006800273745972ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1870__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2789536463356821139ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8448728348623736648ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15713376818013550710ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2899632370850009190ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1871__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14461186309605258241ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12237073278335891683ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3836478183347134271ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1341530769885745783ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1872__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14301889241302348600ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1873__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16928917037670756825ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3718079439936373701ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1061854375169176206ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6530878562680752867ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1874__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10310843594899863412ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10461209007929483211ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2484634520815557729ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3017433902074226837ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1875__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10582097193408960664ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 445394682942847751ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5587115261973479626ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12108523492027228363ull);
    vlSelf->__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1876__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7014662973253665722ull);
}
