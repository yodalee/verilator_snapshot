// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__7__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__7__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__7__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__7__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__9__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__9__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__9__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__11__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__11__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__11__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__11__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__46__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__46__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__46__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__46__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__47__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__47__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__47__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__47__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__48__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__48__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__48__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__48__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__49__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__49__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__49__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__49__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__sel = 0;
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19337;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19337);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19340;
    __VdfgRegularize_h6e95ff9d_0_19340 = 0;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00000101U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x00000018U] 
                                                 >> 7U))
                               : 0U);
    vlSelfRef.__PVT__int_interp_out_pd = (0x0000ffffU 
                                          & ((0x01000000U 
                                              & vlSelfRef.__PVT__int_add[2U])
                                              ? ((0xffffffffU 
                                                  == 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    & ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   & (0xfffffc00U 
                                                      | (0x000003ffU 
                                                         & (vlSelfRef.__PVT__int_add[2U] 
                                                            >> 0x0000000fU)))))
                                                  ? 
                                                 ((0x00008000U 
                                                   & (vlSelfRef.__PVT__int_add[2U] 
                                                      >> 9U)) 
                                                  | (0x00007fffU 
                                                     & vlSelfRef.__PVT__int_add[0U]))
                                                  : 0x8000U)
                                              : ((0U 
                                                  != 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    | ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   | (0x000003ffU 
                                                      & (vlSelfRef.__PVT__int_add[2U] 
                                                         >> 0x0000000fU))))
                                                  ? 0x7fffU
                                                  : 
                                                 vlSelfRef.__PVT__int_add[0U])));
    vlSelfRef.nvdla_op_gated_clk_int = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                        & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_slcg_int__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__42__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__42__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__42__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__42__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__45__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_19337[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19337[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19337[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19337[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__13__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__13__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__13__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__13__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__12__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__12__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__12__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__12__Vfuncout)))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__50__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min;
        } else if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U] 
                                             << 4U) 
                                            | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                               >> 0x0000001cU)));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_76;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x00003000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_0
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_86);
    } else if ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77;
        } else if ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U] 
                                             << 4U) 
                                            | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                               >> 0x0000001cU)));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_76;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x0000c000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[5U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_0
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_86);
    } else {
        vlSelfRef.interp_in_scale = 0U;
        vlSelfRef.interp_in0_pd = 0ULL;
        vlSelfRef.interp_in1_pd = 0ULL;
    }
    VL_SHIFTL_WWI(120,120,6, __Vtemp_9, __VdfgRegularize_h6e95ff9d_0_19337, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_10, __VdfgRegularize_h6e95ff9d_0_19337, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[3U] 
            = (0x00ffffffU & __Vtemp_9[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[3U] 
            = (0x00ffffffU & __Vtemp_10[3U]);
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__46__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__47__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__46__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__47__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__47__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__46__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__47__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__46__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__48__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__49__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__48__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__49__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__49__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__48__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__49__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__48__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__41__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__32__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__7__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__7__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__7__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__7__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__8__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__8__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__8__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__8__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__10__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__10__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__10__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__10__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __VdfgRegularize_h6e95ff9d_0_19340 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[1U])))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__26__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__28__Vfuncout))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__19__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__9__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__9__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__9__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__9__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__11__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__11__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__11__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__11__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19340)
                                                   : __VdfgRegularize_h6e95ff9d_0_19340)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19338[0U] 
                                                                                >> 0x0000001fU)))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__1__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__1__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__1__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__1__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__5__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__5__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__5__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__5__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__6__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__6__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__6__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__6__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__sel = 0;
    // Body
    vlSelfRef.interp_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                                 ? ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                    & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))
                                 : (IData)(vlSelfRef.__PVT__int_vld_d2));
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)));
    vlSelfRef.__PVT__fp_interp_rdy_d0 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                            & (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
              & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
                                                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc) 
           & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt 
        = (1U & ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & ((IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__33__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__43__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__44__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__14__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2)) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__5__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__5__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__5__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__5__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__6__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__6__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__6__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__6__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__4__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__1__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__1__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__1__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__1__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__0__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__16__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__15__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__17__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__38__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__36__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__34__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__39__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__31__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__35__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__40__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__58__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__58__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__58__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__58__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__60__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__60__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__60__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__60__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__62__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__62__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__62__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__62__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__97__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__97__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__97__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__97__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__98__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__98__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__98__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__98__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__99__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__99__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__99__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__99__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__100__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__100__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__100__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__100__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__sel = 0;
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19342;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19342);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19345;
    __VdfgRegularize_h6e95ff9d_0_19345 = 0;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00000202U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x00000016U] 
                                                  << 0x0000000aU) 
                                                 | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x00000015U] 
                                                    >> 0x00000016U)))
                               : 0U);
    vlSelfRef.__PVT__int_interp_out_pd = (0x0000ffffU 
                                          & ((0x01000000U 
                                              & vlSelfRef.__PVT__int_add[2U])
                                              ? ((0xffffffffU 
                                                  == 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    & ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   & (0xfffffc00U 
                                                      | (0x000003ffU 
                                                         & (vlSelfRef.__PVT__int_add[2U] 
                                                            >> 0x0000000fU)))))
                                                  ? 
                                                 ((0x00008000U 
                                                   & (vlSelfRef.__PVT__int_add[2U] 
                                                      >> 9U)) 
                                                  | (0x00007fffU 
                                                     & vlSelfRef.__PVT__int_add[0U]))
                                                  : 0x8000U)
                                              : ((0U 
                                                  != 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    | ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   | (0x000003ffU 
                                                      & (vlSelfRef.__PVT__int_add[2U] 
                                                         >> 0x0000000fU))))
                                                  ? 0x7fffU
                                                  : 
                                                 vlSelfRef.__PVT__int_add[0U])));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__93__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__93__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__93__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__93__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__96__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_19342[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19342[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19342[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19342[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__64__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__64__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__64__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__64__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__63__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__63__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__63__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__63__Vfuncout)))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__101__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x01000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min;
        } else if ((0x02000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                            >> 8U));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_79;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x03000000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_1
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_87);
    } else if ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x04000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77;
        } else if ((0x08000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                            >> 8U));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_79;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x0c000000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_1
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_87);
    } else {
        vlSelfRef.interp_in_scale = 0U;
        vlSelfRef.interp_in0_pd = 0ULL;
        vlSelfRef.interp_in1_pd = 0ULL;
    }
    VL_SHIFTL_WWI(120,120,6, __Vtemp_9, __VdfgRegularize_h6e95ff9d_0_19342, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_10, __VdfgRegularize_h6e95ff9d_0_19342, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[3U] 
            = (0x00ffffffU & __Vtemp_9[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[3U] 
            = (0x00ffffffU & __Vtemp_10[3U]);
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__97__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__98__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__97__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__98__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__98__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__97__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__98__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__97__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__99__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__100__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__99__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__100__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__100__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__99__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__100__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__99__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__78__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__92__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__83__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__58__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__58__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__58__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__58__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__59__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__59__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__59__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__59__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__61__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__61__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__61__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__61__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __VdfgRegularize_h6e95ff9d_0_19345 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[1U])))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__77__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__79__Vfuncout))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__70__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__60__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__60__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__60__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__60__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__62__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__62__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__62__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__62__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19345)
                                                   : __VdfgRegularize_h6e95ff9d_0_19345)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19343[0U] 
                                                                                >> 0x0000001fU)))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__52__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__52__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__52__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__52__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__56__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__56__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__56__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__56__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__57__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__57__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__57__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__57__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__sel = 0;
    // Body
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)));
    vlSelfRef.__PVT__fp_interp_rdy_d0 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                            & (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
              & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
                                                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc) 
           & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt 
        = (1U & ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & ((IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__69__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__94__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__95__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__53__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__65__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2)) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__56__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__56__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__56__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__56__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__57__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__57__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__57__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__57__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__55__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__52__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__52__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__52__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__52__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__67__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__68__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__89__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__87__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__81__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__88__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__82__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__86__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__91__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__109__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__109__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__109__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__109__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__111__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__111__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__111__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__111__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__113__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__113__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__113__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__113__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__148__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__148__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__148__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__148__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__149__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__149__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__149__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__149__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__150__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__150__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__150__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__150__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__sel = 0;
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19347;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19347);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19350;
    __VdfgRegularize_h6e95ff9d_0_19350 = 0;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00000404U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x00000013U] 
                                                 >> 5U))
                               : 0U);
    vlSelfRef.__PVT__int_interp_out_pd = (0x0000ffffU 
                                          & ((0x01000000U 
                                              & vlSelfRef.__PVT__int_add[2U])
                                              ? ((0xffffffffU 
                                                  == 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    & ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   & (0xfffffc00U 
                                                      | (0x000003ffU 
                                                         & (vlSelfRef.__PVT__int_add[2U] 
                                                            >> 0x0000000fU)))))
                                                  ? 
                                                 ((0x00008000U 
                                                   & (vlSelfRef.__PVT__int_add[2U] 
                                                      >> 9U)) 
                                                  | (0x00007fffU 
                                                     & vlSelfRef.__PVT__int_add[0U]))
                                                  : 0x8000U)
                                              : ((0U 
                                                  != 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    | ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   | (0x000003ffU 
                                                      & (vlSelfRef.__PVT__int_add[2U] 
                                                         >> 0x0000000fU))))
                                                  ? 0x7fffU
                                                  : 
                                                 vlSelfRef.__PVT__int_add[0U])));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__144__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__144__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__144__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__144__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__147__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_19347[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19347[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19347[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19347[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__115__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__115__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__115__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__115__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__114__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__114__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__114__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__114__Vfuncout)))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__152__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min;
        } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                             << 0x0000000cU) 
                                            | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U] 
                                               >> 0x00000014U)));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_80;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x00000030U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_2
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_88);
    } else if ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77;
        } else if ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U] 
                                             << 0x0000000cU) 
                                            | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U] 
                                               >> 0x00000014U)));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_80;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x000000c0U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[4U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_2
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_88);
    } else {
        vlSelfRef.interp_in_scale = 0U;
        vlSelfRef.interp_in0_pd = 0ULL;
        vlSelfRef.interp_in1_pd = 0ULL;
    }
    VL_SHIFTL_WWI(120,120,6, __Vtemp_9, __VdfgRegularize_h6e95ff9d_0_19347, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_10, __VdfgRegularize_h6e95ff9d_0_19347, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[3U] 
            = (0x00ffffffU & __Vtemp_9[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[3U] 
            = (0x00ffffffU & __Vtemp_10[3U]);
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__148__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__149__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__148__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__149__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__149__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__148__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__149__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__148__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__150__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__150__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__150__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__151__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__150__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__129__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__143__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__134__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__109__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__109__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__109__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__109__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__110__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__110__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__110__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__110__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__112__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__112__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__112__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__112__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __VdfgRegularize_h6e95ff9d_0_19350 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[1U])))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__128__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__130__Vfuncout))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__111__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__111__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__111__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__111__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__113__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__113__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__113__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__113__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19350)
                                                   : __VdfgRegularize_h6e95ff9d_0_19350)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19348[0U] 
                                                                                >> 0x0000001fU)))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__103__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__103__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__103__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__103__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__107__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__107__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__107__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__107__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__108__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__108__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__108__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__108__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__sel = 0;
    // Body
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)));
    vlSelfRef.__PVT__fp_interp_rdy_d0 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                            & (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
              & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
                                                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc) 
           & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt 
        = (1U & ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & ((IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__135__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__145__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__146__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__104__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2)) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__107__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__107__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__107__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__107__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__108__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__108__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__108__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__108__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__106__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__103__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__103__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__103__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__103__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__102__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__105__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__140__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__136__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__141__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__139__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__137__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__142__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__160__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__160__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__160__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__160__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__162__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__162__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__162__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__162__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__164__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__164__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__164__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__164__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__199__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__199__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__199__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__199__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__200__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__200__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__200__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__200__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__201__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__201__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__201__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__201__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__202__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__202__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__202__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__202__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__sel = 0;
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19352;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19352);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19355;
    __VdfgRegularize_h6e95ff9d_0_19355 = 0;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00000808U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x00000011U] 
                                                  << 0x0000000cU) 
                                                 | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x00000010U] 
                                                    >> 0x00000014U)))
                               : 0U);
    vlSelfRef.__PVT__int_interp_out_pd = (0x0000ffffU 
                                          & ((0x01000000U 
                                              & vlSelfRef.__PVT__int_add[2U])
                                              ? ((0xffffffffU 
                                                  == 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    & ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   & (0xfffffc00U 
                                                      | (0x000003ffU 
                                                         & (vlSelfRef.__PVT__int_add[2U] 
                                                            >> 0x0000000fU)))))
                                                  ? 
                                                 ((0x00008000U 
                                                   & (vlSelfRef.__PVT__int_add[2U] 
                                                      >> 9U)) 
                                                  | (0x00007fffU 
                                                     & vlSelfRef.__PVT__int_add[0U]))
                                                  : 0x8000U)
                                              : ((0U 
                                                  != 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    | ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   | (0x000003ffU 
                                                      & (vlSelfRef.__PVT__int_add[2U] 
                                                         >> 0x0000000fU))))
                                                  ? 0x7fffU
                                                  : 
                                                 vlSelfRef.__PVT__int_add[0U])));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__195__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__195__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__195__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__195__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__198__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_19352[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19352[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19352[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19352[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__166__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__166__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__166__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__166__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__165__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__165__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__165__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__165__Vfuncout)))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__203__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00010000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min;
        } else if ((0x00020000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U]);
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_81;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x00030000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_3
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_89);
    } else if ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00040000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77;
        } else if ((0x00080000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U]);
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_81;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x000c0000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[3U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_3
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_89);
    } else {
        vlSelfRef.interp_in_scale = 0U;
        vlSelfRef.interp_in0_pd = 0ULL;
        vlSelfRef.interp_in1_pd = 0ULL;
    }
    VL_SHIFTL_WWI(120,120,6, __Vtemp_9, __VdfgRegularize_h6e95ff9d_0_19352, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_10, __VdfgRegularize_h6e95ff9d_0_19352, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[3U] 
            = (0x00ffffffU & __Vtemp_9[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[3U] 
            = (0x00ffffffU & __Vtemp_10[3U]);
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__199__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__200__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__199__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__200__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__200__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__199__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__200__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__199__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__201__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__202__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__201__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__202__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__202__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__201__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__202__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__201__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__180__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__194__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__185__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__160__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__160__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__160__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__160__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__161__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__161__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__161__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__161__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__163__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__163__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__163__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__163__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __VdfgRegularize_h6e95ff9d_0_19355 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[1U])))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__179__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__181__Vfuncout))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__172__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__162__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__162__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__162__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__162__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__164__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__164__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__164__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__164__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19355)
                                                   : __VdfgRegularize_h6e95ff9d_0_19355)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19353[0U] 
                                                                                >> 0x0000001fU)))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__182__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__154__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__154__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__154__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__154__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__158__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__158__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__158__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__159__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__159__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__159__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__159__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__sel = 0;
    // Body
    vlSelfRef.interp_out_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                                 ? ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
                                    & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_o_rsci_inst__DOT__HLS_fp17_add_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt))
                                 : (IData)(vlSelfRef.__PVT__int_vld_d2));
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)));
    vlSelfRef.__PVT__fp_interp_rdy_d0 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                            & (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
              & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
                                                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc) 
           & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt 
        = (1U & ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & ((IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__171__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__186__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__197__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__155__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2)) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__158__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__158__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__158__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__158__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__159__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__159__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__159__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__159__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__157__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__154__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__154__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__154__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__154__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__153__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__169__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__170__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__189__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__183__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__187__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__184__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__188__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__211__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__211__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__211__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__211__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__213__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__213__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__213__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__213__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__215__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__215__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__215__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__215__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__250__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__250__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__250__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__250__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__251__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__251__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__251__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__251__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__252__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__252__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__252__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__252__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__253__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__253__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__253__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__253__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__sel = 0;
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19357;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19357);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19360;
    __VdfgRegularize_h6e95ff9d_0_19360 = 0;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00001010U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x0000000eU] 
                                                 >> 3U))
                               : 0U);
    vlSelfRef.__PVT__int_interp_out_pd = (0x0000ffffU 
                                          & ((0x01000000U 
                                              & vlSelfRef.__PVT__int_add[2U])
                                              ? ((0xffffffffU 
                                                  == 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    & ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   & (0xfffffc00U 
                                                      | (0x000003ffU 
                                                         & (vlSelfRef.__PVT__int_add[2U] 
                                                            >> 0x0000000fU)))))
                                                  ? 
                                                 ((0x00008000U 
                                                   & (vlSelfRef.__PVT__int_add[2U] 
                                                      >> 9U)) 
                                                  | (0x00007fffU 
                                                     & vlSelfRef.__PVT__int_add[0U]))
                                                  : 0x8000U)
                                              : ((0U 
                                                  != 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    | ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   | (0x000003ffU 
                                                      & (vlSelfRef.__PVT__int_add[2U] 
                                                         >> 0x0000000fU))))
                                                  ? 0x7fffU
                                                  : 
                                                 vlSelfRef.__PVT__int_add[0U])));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__246__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__246__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__246__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__246__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__249__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_19357[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19357[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19357[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19357[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__217__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__217__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__217__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__217__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__216__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__216__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__216__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__216__Vfuncout)))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__254__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min;
        } else if ((0x20000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                            >> 0x0000000cU));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_82;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x30000000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_4
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_90);
    } else if ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x40000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77;
        } else if ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                    >> 0x0000001fU)) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                            >> 0x0000000cU));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_82;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0xc0000000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_4
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_90);
    } else {
        vlSelfRef.interp_in_scale = 0U;
        vlSelfRef.interp_in0_pd = 0ULL;
        vlSelfRef.interp_in1_pd = 0ULL;
    }
    VL_SHIFTL_WWI(120,120,6, __Vtemp_9, __VdfgRegularize_h6e95ff9d_0_19357, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_10, __VdfgRegularize_h6e95ff9d_0_19357, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[3U] 
            = (0x00ffffffU & __Vtemp_9[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[3U] 
            = (0x00ffffffU & __Vtemp_10[3U]);
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__250__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__251__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__250__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__251__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__251__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__250__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__251__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__250__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__252__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__253__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__252__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__253__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__253__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__252__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__253__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__252__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__231__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__245__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__211__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__211__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__211__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__211__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__212__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__212__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__212__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__212__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__214__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__214__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__214__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__214__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __VdfgRegularize_h6e95ff9d_0_19360 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[1U])))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__230__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__223__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__213__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__213__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__213__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__213__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__215__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__215__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__215__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__215__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19360)
                                                   : __VdfgRegularize_h6e95ff9d_0_19360)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[0U] 
                                                                                >> 0x0000001fU)))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__205__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__205__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__205__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__205__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__209__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__209__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__209__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__210__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__210__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__210__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__210__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__sel = 0;
    // Body
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)));
    vlSelfRef.__PVT__fp_interp_rdy_d0 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                            & (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
              & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
                                                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc) 
           & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt 
        = (1U & ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & ((IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__222__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__247__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__248__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__206__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__218__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2)) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__209__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__209__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__209__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__209__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__210__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__210__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__210__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__210__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__208__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__205__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__205__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__205__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__205__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__204__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__207__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__220__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__219__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__221__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__242__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__240__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__234__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__238__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__243__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__241__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__235__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__239__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__244__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__262__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__262__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__262__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__262__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__264__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__264__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__264__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__264__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__266__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__266__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__266__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__266__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__301__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__301__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__301__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__301__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__302__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__302__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__302__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__302__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__303__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__303__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__303__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__303__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__sel = 0;
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19362;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19362);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19365;
    __VdfgRegularize_h6e95ff9d_0_19365 = 0;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00002020U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x0000000cU] 
                                                  << 0x0000000eU) 
                                                 | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x0000000bU] 
                                                    >> 0x00000012U)))
                               : 0U);
    vlSelfRef.__PVT__int_interp_out_pd = (0x0000ffffU 
                                          & ((0x01000000U 
                                              & vlSelfRef.__PVT__int_add[2U])
                                              ? ((0xffffffffU 
                                                  == 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    & ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   & (0xfffffc00U 
                                                      | (0x000003ffU 
                                                         & (vlSelfRef.__PVT__int_add[2U] 
                                                            >> 0x0000000fU)))))
                                                  ? 
                                                 ((0x00008000U 
                                                   & (vlSelfRef.__PVT__int_add[2U] 
                                                      >> 9U)) 
                                                  | (0x00007fffU 
                                                     & vlSelfRef.__PVT__int_add[0U]))
                                                  : 0x8000U)
                                              : ((0U 
                                                  != 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    | ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   | (0x000003ffU 
                                                      & (vlSelfRef.__PVT__int_add[2U] 
                                                         >> 0x0000000fU))))
                                                  ? 0x7fffU
                                                  : 
                                                 vlSelfRef.__PVT__int_add[0U])));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__297__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__297__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__297__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__297__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__300__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_19362[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19362[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19362[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19362[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__268__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__268__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__268__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__268__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__Vfuncout)))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__305__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min;
        } else if ((0x00000200U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                             << 8U) 
                                            | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                               >> 0x00000018U)));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_83;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x00000300U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_5
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_91);
    } else if ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00000400U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77;
        } else if ((0x00000800U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                             << 8U) 
                                            | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                               >> 0x00000018U)));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_83;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x00000c00U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_5
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_91);
    } else {
        vlSelfRef.interp_in_scale = 0U;
        vlSelfRef.interp_in0_pd = 0ULL;
        vlSelfRef.interp_in1_pd = 0ULL;
    }
    VL_SHIFTL_WWI(120,120,6, __Vtemp_9, __VdfgRegularize_h6e95ff9d_0_19362, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_10, __VdfgRegularize_h6e95ff9d_0_19362, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[3U] 
            = (0x00ffffffU & __Vtemp_9[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[3U] 
            = (0x00ffffffU & __Vtemp_10[3U]);
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__301__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__302__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__301__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__302__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__302__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__301__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__302__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__301__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__303__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__303__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__303__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__304__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__303__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__282__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__296__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__287__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__262__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__262__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__262__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__262__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__263__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__263__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__263__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__263__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__265__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__265__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__265__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__265__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __VdfgRegularize_h6e95ff9d_0_19365 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[1U])))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__281__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__283__Vfuncout))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__264__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__264__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__264__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__264__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__266__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__266__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__266__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__266__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19365)
                                                   : __VdfgRegularize_h6e95ff9d_0_19365)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[0U] 
                                                                                >> 0x0000001fU)))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__284__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__256__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__256__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__256__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__256__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__260__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__260__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__260__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__260__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__261__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__261__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__261__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__261__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__sel = 0;
    // Body
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)));
    vlSelfRef.__PVT__fp_interp_rdy_d0 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                            & (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
              & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d0) 
                                                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc) 
           & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt 
        = (1U & ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & ((IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__273__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__288__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__298__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__299__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__257__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__269__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)));
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2)) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
           & (IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__260__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__260__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__260__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__260__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__261__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__261__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__261__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__261__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__259__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__256__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__256__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__256__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__256__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__255__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__258__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__271__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__270__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__272__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__293__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__291__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__285__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__289__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse 
        = ((IData)(u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__294__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__292__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__286__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__290__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__295__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__313__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__313__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__313__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__313__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__315__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__315__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__315__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__315__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__317__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__317__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__317__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__317__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__352__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__352__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__352__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__352__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__353__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__353__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__353__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__353__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__354__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__354__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__354__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__354__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__355__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__355__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__355__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__355__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__sel = 0;
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19367;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19367);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19370;
    __VdfgRegularize_h6e95ff9d_0_19370 = 0;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00004040U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[9U] 
                                                 >> 1U))
                               : 0U);
    vlSelfRef.__PVT__int_interp_out_pd = (0x0000ffffU 
                                          & ((0x01000000U 
                                              & vlSelfRef.__PVT__int_add[2U])
                                              ? ((0xffffffffU 
                                                  == 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    & ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   & (0xfffffc00U 
                                                      | (0x000003ffU 
                                                         & (vlSelfRef.__PVT__int_add[2U] 
                                                            >> 0x0000000fU)))))
                                                  ? 
                                                 ((0x00008000U 
                                                   & (vlSelfRef.__PVT__int_add[2U] 
                                                      >> 9U)) 
                                                  | (0x00007fffU 
                                                     & vlSelfRef.__PVT__int_add[0U]))
                                                  : 0x8000U)
                                              : ((0U 
                                                  != 
                                                  ((((vlSelfRef.__PVT__int_add[1U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.__PVT__int_add[0U] 
                                                        >> 0x0000000fU)) 
                                                    | ((vlSelfRef.__PVT__int_add[2U] 
                                                        << 0x00000011U) 
                                                       | (vlSelfRef.__PVT__int_add[1U] 
                                                          >> 0x0000000fU))) 
                                                   | (0x000003ffU 
                                                      & (vlSelfRef.__PVT__int_add[2U] 
                                                         >> 0x0000000fU))))
                                                  ? 0x7fffU
                                                  : 
                                                 vlSelfRef.__PVT__int_add[0U])));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__348__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__348__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__348__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__348__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__351__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_19367[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19367[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19367[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19367[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__319__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__319__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__319__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__319__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__Vfuncout)))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__356__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min;
        } else if ((0x00200000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                            >> 4U));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_84;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x00300000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_6
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_92);
    } else if ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])) {
        if ((0x00400000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77;
        } else if ((0x00800000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])) {
            vlSelfRef.interp_in_scale = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale;
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78;
        } else {
            vlSelfRef.interp_in_scale = (0x0000ffffU 
                                         & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                            >> 4U));
            vlSelfRef.interp_in0_pd = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_84;
        }
        vlSelfRef.interp_in1_pd = ((IData)((0U != (0x00c00000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_6
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_92);
    } else {
        vlSelfRef.interp_in_scale = 0U;
        vlSelfRef.interp_in0_pd = 0ULL;
        vlSelfRef.interp_in1_pd = 0ULL;
    }
    VL_SHIFTL_WWI(120,120,6, __Vtemp_9, __VdfgRegularize_h6e95ff9d_0_19367, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_10, __VdfgRegularize_h6e95ff9d_0_19367, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[0U] 
            = __Vtemp_9[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[1U] 
            = __Vtemp_9[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U] 
            = __Vtemp_9[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[3U] 
            = (0x00ffffffU & __Vtemp_9[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[0U] 
            = __Vtemp_10[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[1U] 
            = __Vtemp_10[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U] 
            = __Vtemp_10[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[3U] 
            = (0x00ffffffU & __Vtemp_10[3U]);
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__352__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__353__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__352__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__353__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__353__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__352__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__353__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__352__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__354__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__355__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__354__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__355__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__355__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__354__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__355__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__354__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__333__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__347__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__338__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__313__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__313__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__313__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__313__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__314__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__314__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__314__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__314__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__316__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__316__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__316__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__316__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __VdfgRegularize_h6e95ff9d_0_19370 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[1U])))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__332__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__334__Vfuncout))));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__315__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__315__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__315__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__315__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__317__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__317__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__317__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__317__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19370)
                                                   : __VdfgRegularize_h6e95ff9d_0_19370)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[0U] 
                                                                                >> 0x0000001fU)))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__335__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
}
