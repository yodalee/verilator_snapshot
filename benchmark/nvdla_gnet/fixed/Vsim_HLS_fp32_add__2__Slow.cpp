// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum9__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__862__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__862__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__862__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__862__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__883__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__883__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__883__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__883__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__fp16_sum7;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__stage4_sum08_rdy)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__stage4_sum7_rdy)));
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__882__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__882__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__882__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__882__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__861__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__861__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__861__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__861__Vfuncout))))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__883__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__883__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__883__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__883__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__862__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__862__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__862__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__862__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum9__2(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum9__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5;
    HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_5 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.fp16_sum_rdy));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__857__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__855__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__859__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_add_core_inst__DOT____VdfgRegularize_h49abe1e4_0_3)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__860__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__858__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__856__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_3_5__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_3_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__926__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__926__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__926__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__926__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__932__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__932__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__932__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__932__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__933__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__934__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__926__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__926__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__926__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__926__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__920__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__921__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__962__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__964__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__963__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__961__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__958__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__960__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__959__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__957__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__924__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__924__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__924__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__924__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__922__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__922__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__922__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__922__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__923__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__923__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__923__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__923__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__952__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__954__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__925__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__937__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__966__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__965__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__935__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__935__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__935__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__935__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__936__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__936__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__936__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__936__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__927__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__929__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__928__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__930__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__932__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__932__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__932__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__932__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__948__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__948__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__948__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__948__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__931__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__949__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_3_5__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_3_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__919__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__919__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__919__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__919__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__940__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__940__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__940__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__940__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__fp16_sum_stage0_rdy) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_26)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_4;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__968__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__967__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__939__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__939__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__939__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__939__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__918__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__918__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__918__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__918__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__914__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__938__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__940__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__940__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__940__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__940__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__919__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__919__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__919__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__919__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__953__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__955__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__912__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__915__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__913__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__950__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__951__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_2_6__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_2_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__983__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__983__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__983__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__983__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__989__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__989__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__989__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__989__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__990__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__991__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__983__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__983__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__983__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__983__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__977__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__978__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1019__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1021__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1020__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1018__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1015__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1017__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1016__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1014__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__981__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__981__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__981__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__981__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__979__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__979__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__979__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__979__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__980__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__980__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__980__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__980__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1009__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1011__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__982__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__994__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1023__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1022__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__992__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__992__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__992__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__992__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__993__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__993__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__993__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__993__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__984__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__986__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__985__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__987__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__989__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__989__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__989__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__989__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1005__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1005__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1005__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1005__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__988__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1006__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_2_6__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_2_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__976__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__976__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__976__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__976__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__997__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__997__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__997__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__997__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_5) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_1_0)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1024__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1025__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__996__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__996__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__996__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__996__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__975__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__975__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__975__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__975__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__971__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__995__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__997__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__997__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__997__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__997__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__976__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__976__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__976__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__976__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1010__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1012__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__969__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__972__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__970__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1007__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1008__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_1_7__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_1_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1040__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1040__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1040__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1040__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1046__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1046__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1046__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1046__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1047__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1048__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1040__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1040__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1040__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1040__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1034__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1035__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1076__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1078__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1077__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1075__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1072__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1074__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1073__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1071__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1038__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1038__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1038__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1038__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1036__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1036__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1036__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1036__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1037__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1037__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1037__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1037__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1066__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1068__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1039__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1051__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1080__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1079__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1049__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1049__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1049__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1049__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1050__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1050__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1050__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1050__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1041__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1043__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1042__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1044__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1046__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1046__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1046__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1046__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1062__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1062__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1062__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1062__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1045__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1063__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_1_7__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_1_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1033__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1033__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1033__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1033__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1054__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1054__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1054__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1054__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_6) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_25)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_6;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1082__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_0;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__1081__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1053__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1053__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1053__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__1053__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1032__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1032__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1032__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__1032__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1028__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1052__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1054__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1054__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1054__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1054__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1033__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1033__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1033__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1033__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1067__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1069__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1026__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1029__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_28));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1027__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1064__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1065__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1097__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1097__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1097__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1097__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1103__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1103__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1103__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1103__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1104__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1105__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1097__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1097__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1097__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1097__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1091__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1092__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__1133__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__1135__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__1134__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__1132__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__1129__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__1131__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__1130__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__1128__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1095__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1095__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1095__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1095__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1093__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1093__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1093__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1093__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1094__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1094__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1094__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__1094__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1123__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1125__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__1096__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1108__Vfuncout;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__1137__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__1136__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1106__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1106__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1106__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__1106__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1107__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1107__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1107__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1107__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__1098__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1100__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__1099__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__1101__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1103__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1103__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1103__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__1103__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1119__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1119__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1119__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__1119__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1102__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__1120__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_0_8__1\n"); );
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
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1090__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__1109__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1111__vector = 0;
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__VdfgRegularize_h1b022894_0_7) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.__PVT__pipe_p4__DOT__p4_pipe_valid)));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_13));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__1147__vector = 0;
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
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__1168__vector = 0;
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
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1196__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__0\n"); );
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
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1253__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum5__1\n"); );
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__0\n"); );
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
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1310__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum7__1\n"); );
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2__u_HLS_fp32_add_sum9__0\n"); );
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
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__1367__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16))));
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
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
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
