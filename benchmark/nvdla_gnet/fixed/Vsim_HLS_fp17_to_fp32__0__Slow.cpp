// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__0\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__0\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__0\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__1\n"); );
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
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0ff0U == (0x0ff0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_14)))));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__1\n"); );
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
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0fe0U == (0x0fe0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x0fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_15)))));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__1\n"); );
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
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0fc0U == (0x0fc0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x1fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_16)))));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__1\n"); );
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
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0f80U == (0x0f80U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x3fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_17)))));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__1\n"); );
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
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0f00U == (0x0f00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x7fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_18)))));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__1\n"); );
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
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0e00U == (0x0e00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0xffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_19)))));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__0\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__0\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__0\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
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
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
}

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__1\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0) 
           & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_in_rdy))));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__2(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__2\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__1\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0) 
           & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_in_rdy))) 
                      & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld))));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__2(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__2\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__1\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
              & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_6))));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__2(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__2\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__1\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0) 
           & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_7)));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__2(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__2\n"); );
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
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
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

VL_ATTR_COLD void Vsim_HLS_fp17_to_fp32___ctor_var_reset(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_a_rsc_z = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2380236594467781804ull);
    vlSelf->chn_a_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991353141507009153ull);
    vlSelf->chn_a_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13710593673808292217ull);
    vlSelf->chn_o_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1477624943684843811ull);
    vlSelf->chn_o_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276632572638137710ull);
    vlSelf->chn_o_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314530991929382410ull);
    vlSelf->__PVT__chn_a_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7490943170919625054ull);
    vlSelf->__PVT__chn_o_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134422164122515618ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13038174693520308939ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12888092569276918210ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17516047162224454808ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1008328243366047697ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9700600589645147722ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14056132383720226262ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14957016625694248962ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1780726568520407348ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5189152302725892699ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9904857056017947640ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1379807326421803202ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14573013666379899379ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10587754374302305439ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7441701882276801870ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6496003082833961459ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12462359620910950915ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3071513201925740240ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16222313497199197736ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10312211659534008414ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7195609916143401499ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13034837184561643988ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18292890197057504038ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17824846451814830872ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5393374197364761151ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16209959560253456301ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14979543107258281149ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8841736233004736850ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2893474665810177832ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8539904050346743654ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11223342002279129942ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11634681617941944244ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12804410253008874794ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10077411432970421159ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10731364670711783456ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3283807819821166899ull);
    vlSelf->HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12658627191695224663ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18026097825102297349ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12391529471750188287ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12236967727863612810ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3661667752713877010ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7435233039475911629ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1391308446779514156ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4543757182007692009ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13374931810169704134ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9567898901379924489ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 14368593419060959017ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17429817495854454393ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4197383965291228813ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7363617856113934738ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3401982459823135210ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6682169973709860362ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9056036119160775830ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12349282438829301090ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13341319319877607209ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5569979040325433587ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13376119373189931106ull);
    vlSelf->__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1580844057795963505ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__9__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8893643438969967785ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__9__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9094923562888016163ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__21__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8004048996527293846ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__21__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7400226260374061086ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__33__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4690386433780720555ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__33__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10337697920875949056ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__45__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2071094888167424794ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__45__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13046300810231766865ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__57__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13948944979743692109ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__57__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12107449188662106740ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__69__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3331172933452175985ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__69__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4095729074376201415ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__81__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 268158705835413620ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__81__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6675697211770587637ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__93__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 26038597170589600ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__93__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8625996484159634983ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__105__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4232388283977263029ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__105__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9805032504163687010ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__117__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1102333135943708028ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__117__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18098175479979775045ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__129__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15008575170117464932ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__129__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5692466595590321076ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__141__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 568326821700013985ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__141__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17440649957289220993ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__153__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1910307504871517754ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__153__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13842078132267611623ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__165__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14974976252886590490ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__165__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6763551087610713547ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__177__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13088940297496966973ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__177__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14764181755151930761ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__189__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15241044533488433330ull);
    vlSelf->__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__189__vector = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11244689448793115821ull);
}
