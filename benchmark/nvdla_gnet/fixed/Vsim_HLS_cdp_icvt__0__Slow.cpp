// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_cdp_icvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__Vfuncout = 0;
    QData/*54:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__vector = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__Vfuncout = 0;
    QData/*62:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__vector = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__sel = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2 = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg2 = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__sel = 0;
    // Body
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_0 
        = (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__52__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__sel 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_1 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm) 
            << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm) 
                                << 9U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_0 
        = ((0x0001fe00U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2) 
                                             >> 8U)))) 
                           << 9U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__61__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector 
        = ((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2)) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector 
                                           >> 0x36U))))) 
            << 0x00000037U) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__1__Vfuncout;
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_slcg_core__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__vector 
        = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                 >> 0x17U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__3__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__2__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_preproc_pd0;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__73__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3266 = (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2))), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_1 
        = (0x0000ffffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector 
        = (0x000000ffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__Vfuncout 
        = ((0x0000ff00U & ((- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__vector));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__65__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__64__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector 
        = ((QData)((IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl) 
                             << 0x00000018U) | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm))) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector 
                                           >> 0x3eU))))) 
            << 0x0000003fU) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__4__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00ffffffffffffffULL & VL_SHIFTRS_QQI(56,56,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__71__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__vector 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                              >> 8U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__Vfuncout))) 
                          - VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__vector 
                            = (0x000000ffU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__Vfuncout)))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_1 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__vector 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 7U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__63__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__62__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__d 
        = ((((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17) 
               << 3U) | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16) 
                         << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14))) 
            << 0x0000000eU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                << 0x0000000aU) | (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                                    << 9U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3266))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = VL_SHIFTRS_QQI(64,64,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__arg2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__72__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl 
        = (IData)(((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                    >> 0x0000001eU) & (0x0080000000000000ULL 
                                       != (0x008000003fffffffULL 
                                           & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__vector 
                            = (1U | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl) 
                                      << 9U) | (0x000001feU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                   << 1U))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__Vfuncout)) 
                          + VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__vector 
                            = (1U | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl) 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 
        = (IData)((0ULL != (0x000000003fffffffULL & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__vector 
        = (0x0003ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp 
        = (0x0003ffffU & VL_SHIFTR_III(18,18,32, __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__vector, 1U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__68__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x00000037U))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__vector 
                            = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                               >> 0x1fU);
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__Vfuncout)) 
                                    + VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x0000003fU))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                    >> 0x00000021U)) & (0x0001ffffU 
                                        != (0x0001ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                       >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                             >> 0x00000021U)) | (0U 
                                                 == 
                                                 (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                             >> 0x00000010U)))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__16__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                 >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__17__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1 
        = (((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_cdp_icvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__Vfuncout = 0;
    QData/*54:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__vector = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__Vfuncout = 0;
    QData/*62:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__vector = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__sel = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__sbit;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg2 = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg2 = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__sel = 0;
    // Body
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_0 
        = (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__sel 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_1 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm) 
            << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm) 
                                << 9U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_0 
        = ((0x0001fe00U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2) 
                                             >> 8U)))) 
                           << 9U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__135__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector 
        = ((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2)) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector 
                                           >> 0x36U))))) 
            << 0x00000037U) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__75__Vfuncout;
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__vector 
        = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                 >> 0x17U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__77__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__76__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_preproc_pd1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__147__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2))), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_1 
        = (0x0000ffffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector 
        = (0x000000ffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__Vfuncout 
        = ((0x0000ff00U & ((- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__vector));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__139__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__138__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector 
        = ((QData)((IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl) 
                             << 0x00000018U) | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm))) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector 
                                           >> 0x3eU))))) 
            << 0x0000003fU) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__78__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00ffffffffffffffULL & VL_SHIFTRS_QQI(56,56,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__145__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__vector 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                              >> 8U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__Vfuncout))) 
                          - VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__vector 
                            = (0x000000ffU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__Vfuncout)))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_1 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__vector 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 7U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__137__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__136__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = VL_SHIFTRS_QQI(64,64,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__arg2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__146__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl 
        = (IData)(((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                    >> 0x0000001eU) & (0x0080000000000000ULL 
                                       != (0x008000003fffffffULL 
                                           & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__vector 
                            = (1U | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl) 
                                      << 9U) | (0x000001feU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                   << 1U))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__Vfuncout)) 
                          + VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__vector 
                            = (1U | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl) 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 
        = (IData)((0ULL != (0x000000003fffffffULL & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__vector 
        = (0x0003ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp 
        = (0x0003ffffU & VL_SHIFTR_III(18,18,32, __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__vector, 1U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__142__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x00000037U))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__vector 
                            = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                               >> 0x1fU);
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__Vfuncout)) 
                                    + VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x0000003fU))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                    >> 0x00000021U)) & (0x0001ffffU 
                                        != (0x0001ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                       >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                             >> 0x00000021U)) | (0U 
                                                 == 
                                                 (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                             >> 0x00000010U)))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__128__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__90__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                 >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__91__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg1 
        = (((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__arg1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__Vfuncout 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__144__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__143__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__95__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_cdp_icvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__Vfuncout = 0;
    QData/*54:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__vector = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__Vfuncout = 0;
    QData/*62:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__vector = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__sel = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__sbit;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg2 = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg2 = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__sel = 0;
    // Body
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_0 
        = (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__sel 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_1 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm) 
            << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm) 
                                << 9U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_0 
        = ((0x0001fe00U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2) 
                                             >> 8U)))) 
                           << 9U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__209__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector 
        = ((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2)) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector 
                                           >> 0x36U))))) 
            << 0x00000037U) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__149__Vfuncout;
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__vector 
        = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                 >> 0x17U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__151__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__150__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_preproc_pd2;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__221__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2))), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_1 
        = (0x0000ffffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector 
        = (0x000000ffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__Vfuncout 
        = ((0x0000ff00U & ((- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__vector));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__213__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__212__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector 
        = ((QData)((IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl) 
                             << 0x00000018U) | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm))) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector 
                                           >> 0x3eU))))) 
            << 0x0000003fU) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__152__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00ffffffffffffffULL & VL_SHIFTRS_QQI(56,56,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__219__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__vector 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                              >> 8U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__Vfuncout))) 
                          - VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__vector 
                            = (0x000000ffU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__Vfuncout)))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_1 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__vector 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 7U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__211__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__210__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = VL_SHIFTRS_QQI(64,64,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__arg2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__220__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl 
        = (IData)(((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                    >> 0x0000001eU) & (0x0080000000000000ULL 
                                       != (0x008000003fffffffULL 
                                           & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__vector 
                            = (1U | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl) 
                                      << 9U) | (0x000001feU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                   << 1U))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__Vfuncout)) 
                          + VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__vector 
                            = (1U | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl) 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 
        = (IData)((0ULL != (0x000000003fffffffULL & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__vector 
        = (0x0003ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp 
        = (0x0003ffffU & VL_SHIFTR_III(18,18,32, __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__vector, 1U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__216__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x00000037U))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__vector 
                            = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                               >> 0x1fU);
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__Vfuncout)) 
                                    + VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x0000003fU))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                    >> 0x00000021U)) & (0x0001ffffU 
                                        != (0x0001ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                       >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                             >> 0x00000021U)) | (0U 
                                                 == 
                                                 (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                             >> 0x00000010U)))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__202__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__164__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                 >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__165__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg1 
        = (((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__arg1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__Vfuncout 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__218__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__217__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__169__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_cdp_icvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3__0(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__u_HLS_cdp_icvt_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__Vfuncout = 0;
    QData/*54:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__vector = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__Vfuncout = 0;
    QData/*62:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__vector = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__sel = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector = 0;
    IData/*16:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__Vfuncout = 0;
    IData/*17:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__vector;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__vector = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__sbit;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg2 = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__Vfuncout = 0;
    QData/*55:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg2 = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_0;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_1;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__sel;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__sel = 0;
    // Body
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_0 
        = (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__274__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__sel 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_1 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm) 
            << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm) 
                                << 9U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_0 
        = ((0x0001fe00U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2) 
                                             >> 8U)))) 
                           << 9U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__sel)
            ? __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_1
            : __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__input_0);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__283__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp 
        = (1U & ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U) & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_input_data_type_use)));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector 
        = ((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2)) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector 
                                           >> 0x36U))))) 
            << 0x00000037U) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_56_55__223__Vfuncout;
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3) 
                    >> 1U)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__sel 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var)
              ? 2U : 1U) >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__vector 
        = (1U & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm 
                 >> 0x17U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__225__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__224__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_DP_nan__DOT__nan_preproc_pd3;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__295__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out 
        = (0x00000001ffffffffULL & VL_MULS_QQQ(33, 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,16, (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2))), 
                                               (0x00000001ffffffffULL 
                                                & VL_EXTENDS_QI(33,17, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_1 
        = (0x0000ffffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector 
        = (0x000000ffU & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__Vfuncout 
        = ((0x0000ff00U & ((- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__vector));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_16_8__287__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__286__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector 
        = ((QData)((IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl) 
                             << 0x00000018U) | vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm))) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__Vfuncout 
        = (((QData)((IData)((1U & (IData)((__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector 
                                           >> 0x3eU))))) 
            << 0x0000003fU) | __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__vector);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_64_63__226__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00ffffffffffffffULL & VL_SHIFTRS_QQI(56,56,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__293__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__vector 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                              >> 8U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__Vfuncout))) 
                          - VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__vector 
                            = (0x000000ffU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtin__DOT__reg2dp_datin_offset_use));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__Vfuncout)))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_1 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__vector 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 7U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__Vfuncout 
        = (0x000000ffU & (- (IData)((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__vector))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_0 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__signext_8_1__285__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__284__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg2 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg1 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result 
        = VL_SHIFTRS_QQI(64,64,5, vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__arg2));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__294__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl 
        = (IData)(((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                    >> 0x0000001eU) & (0x0080000000000000ULL 
                                       != (0x008000003fffffffULL 
                                           & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl 
        = (0x0007ffffU & (VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__vector 
                            = (1U | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl) 
                                      << 9U) | (0x000001feU 
                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                   << 1U))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__Vfuncout)) 
                          + VL_EXTEND_II(19,18, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__vector 
                            = (1U | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl) 
                                     << 1U));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__Vfuncout 
                            = ((0x00020000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 
        = (IData)((0ULL != (0x000000003fffffffULL & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2)));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__vector 
        = (0x0003ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp 
        = (0x0003ffffU & VL_SHIFTR_III(18,18,32, __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__vector, 1U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__Vfuncout 
        = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__290__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                      >> 0x1fU)));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__Vfuncout)) 
                          + VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x00000037U))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__vector;
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__vector 
                            = (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                               >> 0x1fU);
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__Vfuncout)) 
                                    + VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__vector 
                            = (1U & ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                              >> 0x0000001eU)) 
                                     & ((~ (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 
                                                    >> 0x0000003fU))) 
                                        | (IData)(vlSelfRef.HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7))));
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva 
        = ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
            >> 0x00000019U) & (0x0001ffffU != (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                     >> 0x00000019U) | (0U == (0x0001ffffU 
                                               & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                                  >> 8U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                    >> 0x00000021U)) & (0x0001ffffU 
                                        != (0x0001ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                       >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                             >> 0x00000021U)) | (0U 
                                                 == 
                                                 (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                             >> 0x00000010U)))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__sel)
            ? (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_1)
            : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__276__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse) 
            << 2U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__238__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__vector 
                            = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__input_0 
                        = (0x0000007fU & (vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva 
                                          >> 1U));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                 >> 0x00000010U)) | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__input_0 
                        = (0x00007fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__239__Vfuncout;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg2 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg2;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg1 
        = (((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__arg1));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg1;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__arg2)));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__Vfuncout 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__292__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__291__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva 
        = (0x0000007fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__sel)
                            ? 0x7fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva 
        = (0x00007fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__sel 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__sel)
                            ? 0x7fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__Vfuncout))));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__sel 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__input_0 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__input_0));
    __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__243__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_cdp_icvt___ctor_var_reset(Vsim_HLS_cdp_icvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_icvt___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_data_in_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3778744464747032861ull);
    vlSelf->chn_data_in_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6411156219638407287ull);
    vlSelf->chn_data_in_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12610757762809989475ull);
    vlSelf->cfg_alu_in_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3201858243794996197ull);
    vlSelf->cfg_mul_in_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7222867562811567290ull);
    vlSelf->cfg_truncate_rsc_z = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7587395491218575582ull);
    vlSelf->cfg_precision_rsc_z = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1006618378060035410ull);
    vlSelf->chn_data_out_rsc_z = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2105024845041982187ull);
    vlSelf->chn_data_out_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8836941278150431517ull);
    vlSelf->chn_data_out_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9527688675389731580ull);
    vlSelf->__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17467643274957857714ull);
    vlSelf->__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8550095718453778785ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11539140988595963778ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16350141273559496183ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5086607321145300750ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14424575384687022581ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4434749994188171626ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9397190304889900739ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3176480648810221510ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16391253999381225048ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17638352814559089633ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18374033981696342130ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_7_1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15671718118733638366ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11333157804512173830ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13692916729358406822ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_rsci_d_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 890076765473067824ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9392630511345864184ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9024792538946914357ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9088568324619786993ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_tmp_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17849005053812057372ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__or_tmp_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12735372486699211314ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__not_tmp_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6391878168894653559ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14710039989344689062ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4834882578870080ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3873690823421109507ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11612508877621825013ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4526462294571262460ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_mul_in_1_sva_2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18378042594347626250ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nor_tmp_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7790702857581541516ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_acc_itm_2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12024585494253474935ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mul_itm_2 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10985546621936244857ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5279567695547954403ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_slc_i_data_15_1_itm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12411450897355212627ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2539924566407020183ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16006813386090347589ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16756526264784649750ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_5_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3202778048266169529ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_1_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12449627373300700557ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_5_4_lpi_1_dfm_6_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10714050129329958804ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2347258974150600448ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2098563508584530755ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10084060154694647330ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_sva = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 2157416234456059307ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_obits_fixed_acc_sat_sva = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 12979477752349707250ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_obits_fixed_acc_sat_sva = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 13719566601389812651ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_33U_5U_17U_obits_fixed_acc_sat_sva = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 17524390249620238930ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_out_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4523832478574321683ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__or_3_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18218090748177707627ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9108491337097323105ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_nor_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5488372654602418255ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_dcpl_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11499914751349920091ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6424580219927630946ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_2_itm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2324326927475651185ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_17U_16U_33U_o_mux1h_1_itm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12984243192641050499ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_itm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10876757832809488232ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntMulExt_17U_16U_33U_o_mul_1_itm = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11366331057288496091ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__cfg_truncate_mux1h_3_itm = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5833458743107880554ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_1_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3847237265172879655ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_cfg_truncate_1_3_itm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15794639653371879990ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16858981854763516776ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_mux1h_1_itm = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7808078441653111249ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_itm = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16776232166804423923ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_1_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10520246461957141594ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_IntSubExt_16U_16U_17U_o_acc_2_itm = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7586474188928503561ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_43_itm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6533879279594500344ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_z_out = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10041299221341415940ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7294681968274880895ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_1 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 3359961970987339294ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__z_out_2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8584190876613718784ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11468512960739847414ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9229372370949500067ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_nvdla_int_h_ln333_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7019517062130697631ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17623457617890222514ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15799765346845266324ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_ovfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2109120315335417318ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_unfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 393797006612402697ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__else_if_ac_int_cctor_16_10_sva = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8399319410301688621ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_ovfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14488848777080319716ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_and_unfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5853393768462576129ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_IntShiftRight_33U_5U_17U_obits_fixed_nor_2_seb_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13072979558273124592ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_and_unfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8884360430489994660ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_ovfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13839957932206041410ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__else_else_o_trt_15_1_sva = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14311176238855051175ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7964432294595879492ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17636380246384003987ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__reg_FpExpoWidthInc_5U_6U_10U_1U_1U_o_mant_lpi_1_dfm_6_tmp_1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12553387782653594261ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__i_data_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18344809960884564404ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_137_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8036180346287406782ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_o_expo_and_2_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7562613524813999481ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__and_144_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10742475159053016056ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__or_107_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14585149247164993274ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14088760885418019919ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_IntShiftRight_25U_5U_9U_obits_fixed_nor_nl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10065297103195525464ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_nor_2_nl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11891480774064045177ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_4_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3109905397601584184ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_48_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 29663590441062220ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6449931343307238062ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_41_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8321804632416047961ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_21_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16273572812353461301ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_20_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6420126588436646604ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_19_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7640059540714830648ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_18_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9854815095319091697ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__or_65_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9200030656179245610ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_22_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6180550365862740742ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_25_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16479087879365264859ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_24_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18375678854620886320ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_23_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12819842027456487194ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17604296911996766933ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_FpExpoWidthInc_5U_6U_10U_1U_1U_if_3_or_1_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5058213345854886800ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2023697074252857067ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_36_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13898211251937320896ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_35_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13384010191192521133ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_33_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10774618037548331811ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_38_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2802060825342806622ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_37_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12390254138978903121ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_28_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5051377442517917075ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntSubExt_8U_8U_9U_1_o_acc_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4623377560912114118ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_16U_16U_17U_o_asn_IntSubExt_16U_16U_17U_o_conc_1_cgspt_9_mux_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3269665730340310776ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17911026267564955201ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_44_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479769631275410257ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_obits_fixed_and_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9370402690336722157ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_obits_fixed_nor_2_nl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6698842079690322198ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_33U_5U_17U_obits_fixed_nor_2_nl = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12382922748581352698ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__mux_42_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16222645232656578001ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntMulExt_9U_16U_25U_o_mux_2_nl = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13818336459924532708ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_acc_nl = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 16409961205240043226ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_4_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9218647684560452855ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntSubExt_8U_8U_9U_o_mux_5_nl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8823129848758948166ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16145378544803656568ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg_a = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 2520272896523395714ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_mux_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12570227039403750095ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__nl_IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg_a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18100383914122942447ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9823374979422855787ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12840110387316976980ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_17_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10013687697876739655ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15584707675234261404ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX1HOT_v_7_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13063727853894840473ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16223224547513004922ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10142722793196376984ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1979275213374263120ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_16_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12750052738135854964ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_17_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15441459097906627387ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_32_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5269067063751930788ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5959066515338127286ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17631734483281898645ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 518764712399597505ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__MUX_v_8_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13925764383190229687ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__readslicef_18_17_1__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17908023936118858929ull);
    vlSelf->HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15750992584309709245ull);
    vlSelf->HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14541525781177015779ull);
    vlSelf->HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3275531640653737542ull);
    vlSelf->HLS_cdp_icvt_core_inst__DOT____VdfgRegularize_ha4fbd86c_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2066064837521027020ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8943533148341478099ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6683385209707713035ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 16578905587978518300ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 11153235106427070220ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 737806323914407298ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15319522226459790195ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10701070148326652831ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14011053738189528753ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10465908001805933566ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__s = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 456529758895393099ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14531480052745835642ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__IntShiftRight_25U_5U_9U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9705376701671885449ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13954335412738614236ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15769675455516744432ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7815682252196772746ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3537450235555941615ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 946330893605184619ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16421267883217167179ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9480896477610284137ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16244620554443110083ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16140588969647553565ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11294766009991477728ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__d = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4182571627284601322ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14097615917555874812ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14653023005583811337ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 397538288129313067ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4899011974627778600ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16530723444412127490ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_icvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17196619717423399185ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15397906416567082769ull);
    vlSelf->__PVT__HLS_cdp_icvt_core_inst__DOT__HLS_cdp_icvt_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6922370986635943312ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6304299160301798428ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__0__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16561733257469284092ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1615681277467212220ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__19__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13935149824083761546ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7261936251350139578ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__20__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5912928603893283921ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 5188278923429147317ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__27__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3907714383523827143ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 13780098534724403092ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__28__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12315211915024552590ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9234278387759488418ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5103912254503350878ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__29__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4954573403380560989ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1353247507850664031ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14489184870429968339ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__30__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9188379770555771091ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 10089958065092191784ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__31__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16849828514897472081ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 5665503708024682209ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__32__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3522133217971741547ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9680647617080610852ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__33__vector = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15446370215461571986ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4661638498953717732ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__34__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2851830920389248579ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10978246425309640573ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5940039891961821332ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__35__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7868992949853988124ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8445719093987285086ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7592343839561027553ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__36__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6347645666761030796ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16712174910994921487ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2944985065654866471ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__49__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12796039816337814820ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10596411374246809784ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9540682746531141912ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__50__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13625364188304368946ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3512660195813208502ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__66__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2029395211941865001ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10065350409727540641ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__67__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 4014484800231231569ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17930797944778101951ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__74__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16547497132513993417ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13799938322718368797ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__93__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11203144323710440179ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15946346280141364295ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__94__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9003439169189614107ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 9296492841388392162ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__101__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6940358279889895270ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 15215483276300288572ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__102__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6911682136465336568ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 193677046597220225ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14424182838692502002ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__103__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2344961791328624476ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3655700563057732628ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3203349415369128868ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__104__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7988649968573241026ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 13862934977189187884ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__105__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1321428489870614106ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3273327435392300479ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__106__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7116419923963210350ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 18305374925862764143ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__107__vector = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17192263415757305833ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14599941901436511964ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__108__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6188664203796165223ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18390506224298320519ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14421293923838344668ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__109__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10829706620253371285ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6030120537819828947ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2288853335285579515ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__110__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8653935960262192518ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4545133589949574191ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4117847843719189384ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__123__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16554202539968779520ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8041130217253916686ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3083241599578860288ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__124__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2667718607135879573ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4469397497885183901ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__140__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 627138508386574668ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1946604342283377609ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__141__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13321002527160654543ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18030901067257013466ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__148__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4423659890723375650ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2060392392802622967ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__167__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15859976537808079900ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10670658301092397441ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__168__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10769752798526520119ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 18268738055434078237ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__175__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9325609768723877499ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 541654535883079140ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__176__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3226626797884997583ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8995052261708129162ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1122729701018043043ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__177__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8465984864168397858ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8651247327123549545ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13574800334341137926ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__178__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18241489533635416895ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 16717710852276115494ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__179__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6879536924558466889ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12920835479474043496ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__180__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10331072172679557561ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16198128247549236061ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__181__vector = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6752168194587035588ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13324380672421795825ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__182__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17605948348105640721ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11295727917482378867ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18295595409097248021ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__183__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6721953988592320348ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6529260045646052675ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12761655043908468901ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__184__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11816731109942928662ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5308049606638847051ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16291961042140132693ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__197__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6928008567307174294ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2656628434331388560ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7896166235635875063ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__198__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7927191005139450828ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 6743577842633215379ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__214__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 13197734488824997448ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11129470180980810811ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__215__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9051383338431625113ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12728515157415106701ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2u_4_5__222__vector = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13347882062013295002ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15239247101754770003ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__241__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17436062411359750490ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8223293165571313012ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_8_9__242__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14367806926190560639ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4911897962764752863ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__249__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8795639054251070182ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3538692528881079610ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__250__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8637122087073098869ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16619820491680340348ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15302282911618195359ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__251__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 261201829900670952ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7448625495261715130ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8199277050485928392ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__252__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17179928885618745245ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 12625250827302141230ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_25_26__253__vector = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15065176169959744879ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__Vfuncout = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 14849430452619643918ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_26__254__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13255153432822258455ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8140086053589974194ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2s_33_34__255__vector = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 14874130860602152969ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__Vfuncout = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4266329569109591439ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_u2s_1_34__256__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10810746779756943724ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14377101387511160860ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6423508162363560208ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__257__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7290689308281331335ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__Vfuncout = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17589979385689619643ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__input_0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13248480500762860715ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_15_2_2__258__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 748128444503401927ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7131537442701595355ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12483547762689528637ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__271__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6498040230034954338ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__Vfuncout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3040341385855162594ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__input_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15366361560955512282ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__MUX_v_7_2_2__272__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4669347852802149980ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13786415737288402648ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__288__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5411335090982093279ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__Vfuncout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2384521639837340400ull);
    vlSelf->__Vfunc_HLS_cdp_icvt_core_inst__DOT__conv_s2u_17_18__289__vector = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 10726588216971476020ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3266 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 52598126047604066ull);
}
