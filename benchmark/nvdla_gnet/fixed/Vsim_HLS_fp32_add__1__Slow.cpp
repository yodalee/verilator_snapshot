// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__u_HLS_fp32_add_sum9__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0__u_HLS_fp32_add_sum9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__406__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__406__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__406__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__406__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__427__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__427__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__427__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__427__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__PVT__fp16_sum7;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__454__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__PVT__stage4_sum08_rdy)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__PVT__fp16_sum_stage3_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__PVT__stage4_sum7_rdy)));
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__426__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__426__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__426__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__426__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__405__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__405__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__405__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__405__Vfuncout))))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__427__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__427__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__427__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__427__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__406__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__406__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__406__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__406__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_3_5__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_3_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__470__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__470__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__470__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__470__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__476__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__476__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__476__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__476__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__477__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__478__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__470__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__470__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__470__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__470__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__464__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__465__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__468__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__468__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__468__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__468__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__466__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__466__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__466__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__466__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__467__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__467__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__467__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__467__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__496__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__498__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__469__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__510__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__509__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__479__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__479__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__479__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__479__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__480__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__480__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__480__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__480__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__471__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__473__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__472__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__474__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__476__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__476__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__476__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__476__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__492__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__492__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__492__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__492__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__475__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__493__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_3_5__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_3_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__463__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__463__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__463__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__463__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__484__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__484__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__484__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__484__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__fp16_sum_stage0_rdy) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_26)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__512__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__511__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__483__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__483__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__483__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__483__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__462__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__462__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__462__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__462__Vfuncout))))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__458__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__484__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__484__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__484__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__484__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__463__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__463__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__463__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__463__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__497__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__499__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__456__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__459__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__457__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__494__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__495__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_2_6__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_2_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__527__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__527__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__527__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__527__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__533__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__533__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__533__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__533__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__534__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__535__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__527__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__527__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__527__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__527__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__521__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__522__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__525__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__525__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__525__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__525__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__523__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__523__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__523__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__523__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__524__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__524__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__524__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__524__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__526__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__538__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__567__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__566__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__536__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__536__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__536__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__536__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__537__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__537__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__537__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__537__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__528__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__530__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__529__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__531__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__533__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__533__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__533__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__533__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__549__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__549__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__549__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__549__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__550__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_2_6__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_2_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__520__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__520__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__520__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__520__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__541__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__541__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__541__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__541__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_5) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_1_0)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_4;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__569__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_0;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__568__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__540__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__540__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__540__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__540__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__519__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__519__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__519__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__519__Vfuncout))))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__539__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__541__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__541__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__541__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__541__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__520__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__520__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__520__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__520__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_1_7__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_1_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__584__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__584__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__584__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__584__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__590__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__590__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__590__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__590__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__591__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__592__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__584__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__584__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__584__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__584__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__578__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__579__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__582__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__582__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__582__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__582__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__580__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__580__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__580__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__580__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__581__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__581__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__581__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__581__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__610__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__612__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__583__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__595__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__624__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__623__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__593__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__593__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__593__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__593__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__594__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__594__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__594__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__594__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__585__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__587__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__586__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__588__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__590__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__590__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__590__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__590__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__606__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__606__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__606__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__606__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__589__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__607__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_1_7__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_1_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__577__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__577__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__577__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__577__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__598__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__598__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__598__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__598__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_6) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_25)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_2.fp16_dout_0;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__625__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__626__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__597__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__597__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__597__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__597__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__576__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__576__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__576__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__576__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__596__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__598__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__598__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__598__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__598__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__577__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__577__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__577__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__577__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__611__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__613__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__608__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__609__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_0_8__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_0_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__641__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__641__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__641__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__641__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__647__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__647__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__647__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__647__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__arg2 = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__648__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__649__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__641__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__641__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__641__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__641__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__635__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__636__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__639__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__639__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__639__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__639__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__637__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__637__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__637__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__637__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__638__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__638__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__638__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__638__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__667__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__669__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__640__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__652__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__681__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__680__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__650__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__650__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__650__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__650__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__651__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__651__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__651__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__651__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__642__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__644__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__643__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__645__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__647__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__647__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__647__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__647__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__663__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__663__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__663__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__663__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__646__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__664__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_0_8__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_0_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__634__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__634__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__634__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__634__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__655__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__655__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__655__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__655__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.fp16_dout_0;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__682__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_7) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__pipe_p4__DOT__p4_pipe_valid)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_3.fp16_dout_6;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__683__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__654__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__654__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__654__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__654__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__633__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__633__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__633__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__633__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__629__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__653__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_o_rsci_inst__DOT__HLS_fp32_add_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__655__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__655__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__655__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__655__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__634__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__634__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__634__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__634__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__668__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__670__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__627__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__630__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__628__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__665__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__666__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum3__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__691__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__691__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__691__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__691__vector = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__698__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__698__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__698__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__698__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__704__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__704__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__704__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__704__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__712__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__712__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__712__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__712__vector = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__arg2 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__705__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__706__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__698__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__698__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__698__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__698__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__pipe_p4__DOT__p4_pipe_data;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__740__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_3_5.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_3_5.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_3_5.__PVT__HLS_fp32_add_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__739__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__692__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__693__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__711__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__711__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__711__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__711__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__690__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__690__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__690__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__690__Vfuncout))))));
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__696__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__696__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__696__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__696__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__694__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__694__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__694__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__694__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__695__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__695__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__695__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__695__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__712__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__712__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__712__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__712__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__691__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__691__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__691__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__691__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__697__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__709__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__738__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__737__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__707__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__707__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__707__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__707__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__708__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__708__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__708__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__708__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__699__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__701__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__700__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__702__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__704__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__704__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__704__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__704__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__720__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__720__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__720__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__720__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__703__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__721__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum5__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__755__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__755__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__755__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__755__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__761__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__761__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__761__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__761__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg2 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__762__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__763__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__755__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__755__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__755__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__755__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__pipe_p8__DOT__p8_pipe_data[2U];
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__749__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__750__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__753__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__753__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__753__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__753__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__751__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__751__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__751__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__751__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__752__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__752__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__752__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__752__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__781__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__754__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__764__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__764__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__764__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__764__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__765__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__765__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__765__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__765__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__756__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__758__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__757__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__759__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__761__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__761__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__761__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__761__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__777__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__777__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__777__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__777__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__778__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum5__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__748__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__748__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__748__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__748__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__769__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__769__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__769__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__769__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__fp16_sum3;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_11) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__stage2_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_11)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.__VdfgRegularize_h1b022894_0_0)
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_12) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__stage2_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_12)));
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__768__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__768__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__768__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__768__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__747__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__747__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__747__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__747__Vfuncout))))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__769__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__769__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__769__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__769__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__748__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__748__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__748__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__748__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum7__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__812__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__812__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__812__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__812__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__818__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__818__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__818__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__818__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg2 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__819__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__820__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__812__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__812__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__812__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__812__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0 
        = (IData)((vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__pipe_p12__DOT__p12_pipe_data 
                   >> 0x00000020U));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__806__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__807__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__810__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__810__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__810__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__810__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__808__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__808__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__808__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__808__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__809__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__809__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__809__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__809__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__811__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__821__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__821__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__821__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__821__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__822__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__822__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__822__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__822__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__813__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__815__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__814__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__816__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__818__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__818__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__818__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__818__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__834__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__834__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__834__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__834__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__817__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__835__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum7__1(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__805__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__805__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__805__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__805__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__826__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__826__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__826__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__826__vector = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel = 0;
    // Body
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__fp16_sum5;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_a_rsci_inst__DOT__HLS_fp32_add_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_14) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__stage3_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_14)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
               ? ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_15) 
                  & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__stage3_pipe_in_rdy))
               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__VdfgRegularize_h1b022894_0_15)));
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__825__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__825__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__825__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_23_24__825__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__804__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__804__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__804__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_8_9__804__Vfuncout))))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__826__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__826__vector, 0x00000017U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__826__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_24_1_23__826__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__805__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__805__vector), 8U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__805__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__805__Vfuncout;
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

VL_ATTR_COLD void Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum9__0(Vsim_HLS_fp32_add* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_add___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1__u_HLS_fp32_add_sum9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__869__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__869__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__869__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__869__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__875__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__875__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__875__vector;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__875__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg2 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__876__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__877__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__869__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__869__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__869__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__869__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_1.__PVT__pipe_p16__DOT__p16_pipe_data;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__HLS_fp32_add_core_chn_b_rsci_inst__DOT__HLS_fp32_add_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__863__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__864__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_1_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit = 0U;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpSignedBitsToFloat_8U_23U_bits_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__sbit 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg2 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg1 
            = __Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg1);
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__sbit))));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg1)));
        vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__Vfuncout;
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
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__867__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__867__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__867__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__867__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__865__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__865__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__865__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__865__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__866__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__866__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__866__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_49_50__866__Vfuncout))));
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nor_31_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_50_2_2__868__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xnor_svs_2_cse;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__880__Vfuncout;
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
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg2;
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg1;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg2)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__Vfuncout 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__878__vector 
                                = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__878__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__878__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2s_6_9__878__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__879__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__879__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__879__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_9_1_8__879__Vfuncout)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__input_1)
            : 0U);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_8_2_2__870__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__872__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_1 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_2 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX1HOT_v_8_3_2__871__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__sel)
            ? __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__input_1
            : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_49_2_2__873__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__875__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__875__vector), 7U));
    __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__875__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__readslicef_8_1_7__875__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__891__vector 
                            = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__891__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__891__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_add_core_inst__DOT__conv_u2u_1_23__891__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__input_0 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__sel)
            ? (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__input_1)
            : (IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__input_0));
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_s_1_2_2__874__Vfuncout;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__sel 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__input_0);
    __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_add_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_add_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout;
}
