// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__2(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__2\n"); );
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
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
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

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__3(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19357;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19357);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19360;
    __VdfgRegularize_h6e95ff9d_0_19360 = 0;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__int_vld_d1) & (IData)(vlSelfRef.__PVT__int_rdy_d1))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
                __Vtemp_7[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[1U];
                __Vtemp_7[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U];
                __Vtemp_7[2U] = (0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[3U]);
            } else {
                __Vtemp_7[0U] = (IData)(vlSelfRef.__PVT__int_mul_for_Rshift);
                __Vtemp_7[1U] = (((- (IData)((1U & (IData)(
                                                           (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                            >> 0x00000039U))))) 
                                  << 0x0000001aU) | (IData)(
                                                            (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                             >> 0x00000020U)));
                __Vtemp_7[2U] = (0x00ffffffU & (0x00ffffffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                                          >> 0x00000039U))))) 
                                                   >> 6U)));
            }
            VL_EXTENDS_WW(89,88, __Vtemp_8, __Vtemp_7);
            __Vtemp_12[0U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               << 0x00000011U) | vlSelfRef.__PVT__interp_in0_pd_d1);
            __Vtemp_12[1U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               >> 0x0000000fU) | ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                                 >> 0x10U)))) 
                                                  << 0x00000011U));
            __Vtemp_12[2U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               >> 0x0000000fU) | (0x00fe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                                    >> 0x10U)))) 
                                                     << 0x00000011U)));
            VL_EXTENDS_WW(89,88, __Vtemp_13, __Vtemp_12);
            VL_ADD_W(3, __Vtemp_14, __Vtemp_8, __Vtemp_13);
            vlSelfRef.__PVT__int_add[0U] = __Vtemp_14[0U];
            vlSelfRef.__PVT__int_add[1U] = __Vtemp_14[1U];
            vlSelfRef.__PVT__int_add[2U] = (0x01ffffffU 
                                            & __Vtemp_14[2U]);
        }
        if (vlSelfRef.__PVT__int_in_load_d0) {
            vlSelfRef.__PVT__int_mul = (0x01ffffffffffffffULL 
                                        & VL_MULS_QQQ(57, 
                                                      (0x01ffffffffffffffULL 
                                                       & VL_EXTENDS_QQ(57,40, vlSelfRef.__PVT__int_sub)), 
                                                      (0x01ffffffffffffffULL 
                                                       & VL_EXTENDS_QI(57,17, vlSelfRef.__PVT__interp_in_offset_d0))));
            vlSelfRef.__PVT__interp_in0_pd_d1 = vlSelfRef.__PVT__interp_in0_pd_d0;
            vlSelfRef.__PVT__interp_in_shift_d1 = vlSelfRef.__PVT__interp_in_shift_d0;
        }
        if (vlSelfRef.__PVT__int_vld_d1) {
            vlSelfRef.__PVT__int_vld_d2 = 1U;
        } else if (vlSelfRef.__PVT__int_interp_out_rdy) {
            vlSelfRef.__PVT__int_vld_d2 = 0U;
        }
        if (vlSelfRef.__PVT__int_in_load) {
            vlSelfRef.__PVT__interp_in_offset_d0 = vlSelfRef.interp_in_scale;
            vlSelfRef.__PVT__int_sub = (0x000000ffffffffffULL 
                                        & (VL_EXTENDS_QQ(40,39, 
                                                         (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.interp_in1_pd 
                                                                                >> 0x25U))))) 
                                                           << 0x00000026U) 
                                                          | vlSelfRef.interp_in1_pd)) 
                                           - VL_EXTENDS_QQ(40,39, vlSelfRef.interp_in0_pd)));
            vlSelfRef.__PVT__interp_in0_pd_d0 = vlSelfRef.interp_in_pd;
            vlSelfRef.__PVT__interp_in_shift_d0 = (
                                                   (0x00001000U 
                                                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                                     ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_94)
                                                     : 
                                                    ((0x20000000U 
                                                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_95)
                                                      : 0x10U))
                                                    : 
                                                   ((0x00000010U 
                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_96)
                                                      : 
                                                     ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                                       >> 0x0000001fU)
                                                       ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_97)
                                                       : 0x10U))
                                                     : 0U));
        }
        if (vlSelfRef.__PVT__int_vld_d0) {
            vlSelfRef.__PVT__int_vld_d1 = 1U;
        } else if (vlSelfRef.__PVT__int_rdy_d1) {
            vlSelfRef.__PVT__int_vld_d1 = 0U;
        }
        if (vlSelfRef.__PVT__int_in_vld) {
            vlSelfRef.__PVT__int_vld_d0 = 1U;
        } else if (vlSelfRef.__PVT__int_rdy_d0) {
            vlSelfRef.__PVT__int_vld_d0 = 0U;
        }
    } else {
        vlSelfRef.__PVT__int_mul = 0ULL;
        vlSelfRef.__PVT__int_add[0U] = 0U;
        vlSelfRef.__PVT__int_add[1U] = 0U;
        vlSelfRef.__PVT__int_add[2U] = 0U;
        vlSelfRef.__PVT__int_vld_d2 = 0U;
        vlSelfRef.__PVT__interp_in_offset_d0 = 0U;
        vlSelfRef.__PVT__int_sub = 0ULL;
        vlSelfRef.__PVT__interp_in0_pd_d1 = 0U;
        vlSelfRef.__PVT__interp_in_shift_d1 = 0U;
        vlSelfRef.__PVT__int_vld_d1 = 0U;
        vlSelfRef.__PVT__interp_in0_pd_d0 = 0U;
        vlSelfRef.__PVT__interp_in_shift_d0 = 0U;
        vlSelfRef.__PVT__int_vld_d0 = 0U;
    }
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
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    VL_SHIFTL_WWI(120,120,6, __Vtemp_23, __VdfgRegularize_h6e95ff9d_0_19357, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_24, __VdfgRegularize_h6e95ff9d_0_19357, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[0U] 
            = __Vtemp_23[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[1U] 
            = __Vtemp_23[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U] 
            = __Vtemp_23[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[3U] 
            = (0x00ffffffU & __Vtemp_23[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19358[3U] 
            = (0x00ffffffU & __Vtemp_24[3U]);
    }
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
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__4(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00001010U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x0000000eU] 
                                                 >> 3U))
                               : 0U);
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_scale = ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                  ? ((0x10000000U & 
                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale
                                      : ((0x20000000U 
                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale
                                          : (0x0000ffffU 
                                             & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                                >> 0x0000000cU))))
                                  : ((0x00000010U & 
                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                      ? ((0x40000000U 
                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale
                                          : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                              >> 0x0000001fU)
                                              ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale
                                              : (0x0000ffffU 
                                                 & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                                    >> 0x0000000cU))))
                                      : 0U));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in1_pd = ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                ? ((IData)((0U != (0x30000000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_4
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_90)
                                : ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                    ? ((IData)((0U 
                                                != 
                                                (0xc0000000U 
                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])))
                                        ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_4
                                        : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_90)
                                    : 0ULL));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__2(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in0_pd = ((0x00001000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                ? ((0x10000000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min
                                    : ((0x20000000U 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                        ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75
                                        : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_82))
                                : ((0x00000010U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                    ? ((0x40000000U 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                        ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77
                                        : ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                            >> 0x0000001fU)
                                            ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78
                                            : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_82))
                                    : 0ULL));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__3(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_out_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_prdy) 
                                & (((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)) 
                                    | (IData)(((0xe0U 
                                                == 
                                                (0xe0U 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__Xinterp_out_vld))) 
                                               & (0x0fU 
                                                  == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_23))))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_int)));
    vlSelfRef.__PVT__int_interp_out_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                           | (IData)(vlSelfRef.interp_out_rdy));
    vlSelfRef.__PVT__int_rdy_d1 = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d2)) 
                                         | (IData)(vlSelfRef.__PVT__int_interp_out_rdy)));
    vlSelfRef.__PVT__int_rdy_d0 = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d1)) 
                                         | (IData)(vlSelfRef.__PVT__int_rdy_d1)));
    vlSelfRef.__PVT__int_in_load_d0 = ((IData)(vlSelfRef.__PVT__int_vld_d0) 
                                       & (IData)(vlSelfRef.__PVT__int_rdy_d0));
    vlSelfRef.__PVT__int_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d0)) 
                                         | (IData)(vlSelfRef.__PVT__int_rdy_d0)));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__4(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X4__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_in_pvld) 
                               & (IData)((((0xe0U == 
                                            (0xe0U 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__Xinterp_in_rdy))) 
                                           & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_busy_int))) 
                                          & (0x0fU 
                                             == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_3)))));
    vlSelfRef.__PVT__int_in_vld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                   & (IData)(vlSelfRef.interp_in_vld));
    vlSelfRef.__PVT__fp_in_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                  & (IData)(vlSelfRef.interp_in_vld));
    vlSelfRef.__PVT__int_in_load = ((IData)(vlSelfRef.__PVT__int_in_vld) 
                                    & (IData)(vlSelfRef.__PVT__int_in_rdy));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_2 = ((IData)(vlSelfRef.__PVT__fp_in_vld) 
                                                & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_sub_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_2) 
                                           & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__1\n"); );
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
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__input_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__input_2 = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__input_1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__sel = 0;
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
    // Body
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))));
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2 
                = (0x000007ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
                                  >> 0x0dU));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5 
                = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)));
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2 
                = (7U & ((IData)(1U) + (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x00000018U))));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17)));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2 
                = (1U & (((0U != (0x007fffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva))) 
                          | (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
                             >> 0x17U)) & (((0U != 
                                             (0x007fffffU 
                                              & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 & ((IData)(0x007fffffU) 
                                                    + vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva)))) 
                                            | (0U != 
                                               (0x007fffffU 
                                                & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva)))) 
                                           | (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
                                              >> 0x17U))));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__sel 
                = ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt)));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__input_1 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__input_2 
                = (0x0000001fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = (0x1eU & (- (IData)((1U & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__sel)))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | (1U & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__sel) 
                                             >> 3U))))));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__278__Vfuncout;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__sel)
                    ? 0x1fU : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__275__Vfuncout;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1) 
                    & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2))) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29) 
                   & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__280__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__276__Vfuncout;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__267__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid))));
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9) 
                     | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11)) 
                   | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1 
                = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl) 
                          & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc))) 
                         | (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__279__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__input_0 
                = (0x000003ffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1);
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__277__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
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
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
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
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_vld))));
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1 
                = (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9) 
                     | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                    | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1))) 
                   | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                = (0x1fffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 = 0U;
    }
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
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
    }
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
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
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
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
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
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_vld))));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__2(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__2\n"); );
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
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
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

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__3(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19362;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19362);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19365;
    __VdfgRegularize_h6e95ff9d_0_19365 = 0;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__int_vld_d1) & (IData)(vlSelfRef.__PVT__int_rdy_d1))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
                __Vtemp_7[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[1U];
                __Vtemp_7[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U];
                __Vtemp_7[2U] = (0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[3U]);
            } else {
                __Vtemp_7[0U] = (IData)(vlSelfRef.__PVT__int_mul_for_Rshift);
                __Vtemp_7[1U] = (((- (IData)((1U & (IData)(
                                                           (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                            >> 0x00000039U))))) 
                                  << 0x0000001aU) | (IData)(
                                                            (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                             >> 0x00000020U)));
                __Vtemp_7[2U] = (0x00ffffffU & (0x00ffffffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                                          >> 0x00000039U))))) 
                                                   >> 6U)));
            }
            VL_EXTENDS_WW(89,88, __Vtemp_8, __Vtemp_7);
            __Vtemp_12[0U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               << 0x00000011U) | vlSelfRef.__PVT__interp_in0_pd_d1);
            __Vtemp_12[1U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               >> 0x0000000fU) | ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                                 >> 0x10U)))) 
                                                  << 0x00000011U));
            __Vtemp_12[2U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               >> 0x0000000fU) | (0x00fe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                                    >> 0x10U)))) 
                                                     << 0x00000011U)));
            VL_EXTENDS_WW(89,88, __Vtemp_13, __Vtemp_12);
            VL_ADD_W(3, __Vtemp_14, __Vtemp_8, __Vtemp_13);
            vlSelfRef.__PVT__int_add[0U] = __Vtemp_14[0U];
            vlSelfRef.__PVT__int_add[1U] = __Vtemp_14[1U];
            vlSelfRef.__PVT__int_add[2U] = (0x01ffffffU 
                                            & __Vtemp_14[2U]);
        }
        if (vlSelfRef.__PVT__int_in_load_d0) {
            vlSelfRef.__PVT__int_mul = (0x01ffffffffffffffULL 
                                        & VL_MULS_QQQ(57, 
                                                      (0x01ffffffffffffffULL 
                                                       & VL_EXTENDS_QQ(57,40, vlSelfRef.__PVT__int_sub)), 
                                                      (0x01ffffffffffffffULL 
                                                       & VL_EXTENDS_QI(57,17, vlSelfRef.__PVT__interp_in_offset_d0))));
            vlSelfRef.__PVT__interp_in0_pd_d1 = vlSelfRef.__PVT__interp_in0_pd_d0;
            vlSelfRef.__PVT__interp_in_shift_d1 = vlSelfRef.__PVT__interp_in_shift_d0;
        }
        if (vlSelfRef.__PVT__int_vld_d1) {
            vlSelfRef.__PVT__int_vld_d2 = 1U;
        } else if (vlSelfRef.__PVT__int_interp_out_rdy) {
            vlSelfRef.__PVT__int_vld_d2 = 0U;
        }
        if (vlSelfRef.__PVT__int_in_load) {
            vlSelfRef.__PVT__interp_in_offset_d0 = vlSelfRef.interp_in_scale;
            vlSelfRef.__PVT__int_sub = (0x000000ffffffffffULL 
                                        & (VL_EXTENDS_QQ(40,39, 
                                                         (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.interp_in1_pd 
                                                                                >> 0x25U))))) 
                                                           << 0x00000026U) 
                                                          | vlSelfRef.interp_in1_pd)) 
                                           - VL_EXTENDS_QQ(40,39, vlSelfRef.interp_in0_pd)));
            vlSelfRef.__PVT__interp_in0_pd_d0 = vlSelfRef.interp_in_pd;
            vlSelfRef.__PVT__interp_in_shift_d0 = (
                                                   (0x00002000U 
                                                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                                    ? 
                                                   ((0x00000100U 
                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                                     ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_94)
                                                     : 
                                                    ((0x00000200U 
                                                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_95)
                                                      : 0x10U))
                                                    : 
                                                   ((0x00000020U 
                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                                     ? 
                                                    ((0x00000400U 
                                                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_96)
                                                      : 
                                                     ((0x00000800U 
                                                       & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                                       ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_97)
                                                       : 0x10U))
                                                     : 0U));
        }
        if (vlSelfRef.__PVT__int_vld_d0) {
            vlSelfRef.__PVT__int_vld_d1 = 1U;
        } else if (vlSelfRef.__PVT__int_rdy_d1) {
            vlSelfRef.__PVT__int_vld_d1 = 0U;
        }
        if (vlSelfRef.__PVT__int_in_vld) {
            vlSelfRef.__PVT__int_vld_d0 = 1U;
        } else if (vlSelfRef.__PVT__int_rdy_d0) {
            vlSelfRef.__PVT__int_vld_d0 = 0U;
        }
    } else {
        vlSelfRef.__PVT__int_mul = 0ULL;
        vlSelfRef.__PVT__int_add[0U] = 0U;
        vlSelfRef.__PVT__int_add[1U] = 0U;
        vlSelfRef.__PVT__int_add[2U] = 0U;
        vlSelfRef.__PVT__int_vld_d2 = 0U;
        vlSelfRef.__PVT__interp_in_offset_d0 = 0U;
        vlSelfRef.__PVT__int_sub = 0ULL;
        vlSelfRef.__PVT__interp_in0_pd_d1 = 0U;
        vlSelfRef.__PVT__interp_in_shift_d1 = 0U;
        vlSelfRef.__PVT__int_vld_d1 = 0U;
        vlSelfRef.__PVT__interp_in0_pd_d0 = 0U;
        vlSelfRef.__PVT__interp_in_shift_d0 = 0U;
        vlSelfRef.__PVT__int_vld_d0 = 0U;
    }
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
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    VL_SHIFTL_WWI(120,120,6, __Vtemp_23, __VdfgRegularize_h6e95ff9d_0_19362, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_24, __VdfgRegularize_h6e95ff9d_0_19362, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[0U] 
            = __Vtemp_23[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[1U] 
            = __Vtemp_23[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U] 
            = __Vtemp_23[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[3U] 
            = (0x00ffffffU & __Vtemp_23[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19363[3U] 
            = (0x00ffffffU & __Vtemp_24[3U]);
    }
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
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__4(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00002020U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x0000000cU] 
                                                  << 0x0000000eU) 
                                                 | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0x0000000bU] 
                                                    >> 0x00000012U)))
                               : 0U);
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_scale = ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                  ? ((0x00000100U & 
                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale
                                      : ((0x00000200U 
                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale
                                          : (0x0000ffffU 
                                             & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                                   >> 0x00000018U)))))
                                  : ((0x00000020U & 
                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                      ? ((0x00000400U 
                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale
                                          : ((0x00000800U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                              ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale
                                              : (0x0000ffffU 
                                                 & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                                       >> 0x00000018U)))))
                                      : 0U));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in1_pd = ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                ? ((IData)((0U != (0x00000300U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_5
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_91)
                                : ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                    ? ((IData)((0U 
                                                != 
                                                (0x00000c00U 
                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])))
                                        ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_5
                                        : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_91)
                                    : 0ULL));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__2(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in0_pd = ((0x00002000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                ? ((0x00000100U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min
                                    : ((0x00000200U 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                        ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75
                                        : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_83))
                                : ((0x00000020U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                    ? ((0x00000400U 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                        ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77
                                        : ((0x00000800U 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[2U])
                                            ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78
                                            : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_83))
                                    : 0ULL));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__3(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_out_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_prdy) 
                                & (((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)) 
                                    | (IData)(((0xc0U 
                                                == 
                                                (0xc0U 
                                                 & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__Xinterp_out_vld))) 
                                               & (0x1fU 
                                                  == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_24))))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_int)));
    vlSelfRef.__PVT__int_interp_out_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                           | (IData)(vlSelfRef.interp_out_rdy));
    vlSelfRef.__PVT__int_rdy_d1 = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d2)) 
                                         | (IData)(vlSelfRef.__PVT__int_interp_out_rdy)));
    vlSelfRef.__PVT__int_rdy_d0 = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d1)) 
                                         | (IData)(vlSelfRef.__PVT__int_rdy_d1)));
    vlSelfRef.__PVT__int_in_load_d0 = ((IData)(vlSelfRef.__PVT__int_vld_d0) 
                                       & (IData)(vlSelfRef.__PVT__int_rdy_d0));
    vlSelfRef.__PVT__int_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d0)) 
                                         | (IData)(vlSelfRef.__PVT__int_rdy_d0)));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__4(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_in_pvld) 
                               & (IData)((((0xc0U == 
                                            (0xc0U 
                                             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__Xinterp_in_rdy))) 
                                           & (~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_busy_int))) 
                                          & (0x1fU 
                                             == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_4)))));
    vlSelfRef.__PVT__int_in_vld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                   & (IData)(vlSelfRef.interp_in_vld));
    vlSelfRef.__PVT__fp_in_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                  & (IData)(vlSelfRef.interp_in_vld));
    vlSelfRef.__PVT__int_in_load = ((IData)(vlSelfRef.__PVT__int_in_vld) 
                                    & (IData)(vlSelfRef.__PVT__int_in_rdy));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_2 = ((IData)(vlSelfRef.__PVT__fp_in_vld) 
                                                & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_sub_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_2) 
                                           & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__1\n"); );
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
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__input_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__input_2 = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__input_1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__sel = 0;
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
    // Body
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))));
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2 
                = (0x000007ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
                                  >> 0x0dU));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5 
                = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)));
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2 
                = (7U & ((IData)(1U) + (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x00000018U))));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17)));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2 
                = (1U & (((0U != (0x007fffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva))) 
                          | (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
                             >> 0x17U)) & (((0U != 
                                             (0x007fffffU 
                                              & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 & ((IData)(0x007fffffU) 
                                                    + vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva)))) 
                                            | (0U != 
                                               (0x007fffffU 
                                                & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva)))) 
                                           | (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
                                              >> 0x17U))));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__sel 
                = ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt)));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__input_1 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__input_2 
                = (0x0000001fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = (0x1eU & (- (IData)((1U & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__sel)))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | (1U & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__sel) 
                                             >> 3U))))));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__329__Vfuncout;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__sel)
                    ? 0x1fU : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__326__Vfuncout;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1) 
                    & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2))) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29) 
                   & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__327__Vfuncout;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__318__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid))));
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9) 
                     | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11)) 
                   | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1 
                = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl) 
                          & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc))) 
                         | (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__input_0 
                = (0x000003ffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1);
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__328__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
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
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
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
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_vld))));
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1 
                = (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9) 
                     | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                    | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1))) 
                   | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                = (0x1fffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 = 0U;
    }
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
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
    }
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
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
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
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
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
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_vld))));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__2(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__sel = 0;
    // Body
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__324__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__339__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__349__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__350__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout;
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__311__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__312__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__307__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__306__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__322__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout;
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__323__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__344__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__342__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__340__Vfuncout;
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__345__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__343__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__337__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__341__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__346__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__3(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19367;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19367);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19370;
    __VdfgRegularize_h6e95ff9d_0_19370 = 0;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__int_vld_d1) & (IData)(vlSelfRef.__PVT__int_rdy_d1))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
                __Vtemp_7[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[1U];
                __Vtemp_7[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U];
                __Vtemp_7[2U] = (0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[3U]);
            } else {
                __Vtemp_7[0U] = (IData)(vlSelfRef.__PVT__int_mul_for_Rshift);
                __Vtemp_7[1U] = (((- (IData)((1U & (IData)(
                                                           (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                            >> 0x00000039U))))) 
                                  << 0x0000001aU) | (IData)(
                                                            (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                             >> 0x00000020U)));
                __Vtemp_7[2U] = (0x00ffffffU & (0x00ffffffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                                          >> 0x00000039U))))) 
                                                   >> 6U)));
            }
            VL_EXTENDS_WW(89,88, __Vtemp_8, __Vtemp_7);
            __Vtemp_12[0U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               << 0x00000011U) | vlSelfRef.__PVT__interp_in0_pd_d1);
            __Vtemp_12[1U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               >> 0x0000000fU) | ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                                 >> 0x10U)))) 
                                                  << 0x00000011U));
            __Vtemp_12[2U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               >> 0x0000000fU) | (0x00fe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                                    >> 0x10U)))) 
                                                     << 0x00000011U)));
            VL_EXTENDS_WW(89,88, __Vtemp_13, __Vtemp_12);
            VL_ADD_W(3, __Vtemp_14, __Vtemp_8, __Vtemp_13);
            vlSelfRef.__PVT__int_add[0U] = __Vtemp_14[0U];
            vlSelfRef.__PVT__int_add[1U] = __Vtemp_14[1U];
            vlSelfRef.__PVT__int_add[2U] = (0x01ffffffU 
                                            & __Vtemp_14[2U]);
        }
        if (vlSelfRef.__PVT__int_in_load_d0) {
            vlSelfRef.__PVT__int_mul = (0x01ffffffffffffffULL 
                                        & VL_MULS_QQQ(57, 
                                                      (0x01ffffffffffffffULL 
                                                       & VL_EXTENDS_QQ(57,40, vlSelfRef.__PVT__int_sub)), 
                                                      (0x01ffffffffffffffULL 
                                                       & VL_EXTENDS_QI(57,17, vlSelfRef.__PVT__interp_in_offset_d0))));
            vlSelfRef.__PVT__interp_in0_pd_d1 = vlSelfRef.__PVT__interp_in0_pd_d0;
            vlSelfRef.__PVT__interp_in_shift_d1 = vlSelfRef.__PVT__interp_in_shift_d0;
        }
        if (vlSelfRef.__PVT__int_vld_d1) {
            vlSelfRef.__PVT__int_vld_d2 = 1U;
        } else if (vlSelfRef.__PVT__int_interp_out_rdy) {
            vlSelfRef.__PVT__int_vld_d2 = 0U;
        }
        if (vlSelfRef.__PVT__int_in_load) {
            vlSelfRef.__PVT__interp_in_offset_d0 = vlSelfRef.interp_in_scale;
            vlSelfRef.__PVT__int_sub = (0x000000ffffffffffULL 
                                        & (VL_EXTENDS_QQ(40,39, 
                                                         (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.interp_in1_pd 
                                                                                >> 0x25U))))) 
                                                           << 0x00000026U) 
                                                          | vlSelfRef.interp_in1_pd)) 
                                           - VL_EXTENDS_QQ(40,39, vlSelfRef.interp_in0_pd)));
            vlSelfRef.__PVT__interp_in0_pd_d0 = vlSelfRef.interp_in_pd;
            vlSelfRef.__PVT__interp_in_shift_d0 = (
                                                   (0x00004000U 
                                                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                                    ? 
                                                   ((0x00100000U 
                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                                     ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_94)
                                                     : 
                                                    ((0x00200000U 
                                                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_95)
                                                      : 0x10U))
                                                    : 
                                                   ((0x00000040U 
                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                                     ? 
                                                    ((0x00400000U 
                                                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_96)
                                                      : 
                                                     ((0x00800000U 
                                                       & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                                       ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_97)
                                                       : 0x10U))
                                                     : 0U));
        }
        if (vlSelfRef.__PVT__int_vld_d0) {
            vlSelfRef.__PVT__int_vld_d1 = 1U;
        } else if (vlSelfRef.__PVT__int_rdy_d1) {
            vlSelfRef.__PVT__int_vld_d1 = 0U;
        }
        if (vlSelfRef.__PVT__int_in_vld) {
            vlSelfRef.__PVT__int_vld_d0 = 1U;
        } else if (vlSelfRef.__PVT__int_rdy_d0) {
            vlSelfRef.__PVT__int_vld_d0 = 0U;
        }
    } else {
        vlSelfRef.__PVT__int_mul = 0ULL;
        vlSelfRef.__PVT__int_add[0U] = 0U;
        vlSelfRef.__PVT__int_add[1U] = 0U;
        vlSelfRef.__PVT__int_add[2U] = 0U;
        vlSelfRef.__PVT__int_vld_d2 = 0U;
        vlSelfRef.__PVT__interp_in_offset_d0 = 0U;
        vlSelfRef.__PVT__int_sub = 0ULL;
        vlSelfRef.__PVT__interp_in0_pd_d1 = 0U;
        vlSelfRef.__PVT__interp_in_shift_d1 = 0U;
        vlSelfRef.__PVT__int_vld_d1 = 0U;
        vlSelfRef.__PVT__interp_in0_pd_d0 = 0U;
        vlSelfRef.__PVT__interp_in_shift_d0 = 0U;
        vlSelfRef.__PVT__int_vld_d0 = 0U;
    }
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
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    VL_SHIFTL_WWI(120,120,6, __Vtemp_23, __VdfgRegularize_h6e95ff9d_0_19367, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_24, __VdfgRegularize_h6e95ff9d_0_19367, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[0U] 
            = __Vtemp_23[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[1U] 
            = __Vtemp_23[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U] 
            = __Vtemp_23[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[3U] 
            = (0x00ffffffU & __Vtemp_23[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19368[3U] 
            = (0x00ffffffU & __Vtemp_24[3U]);
    }
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
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__4(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00004040U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[9U] 
                                                 >> 1U))
                               : 0U);
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__0(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_scale = ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                  ? ((0x00100000U & 
                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale
                                      : ((0x00200000U 
                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale
                                          : (0x0000ffffU 
                                             & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                                >> 4U))))
                                  : ((0x00000040U & 
                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                      ? ((0x00400000U 
                                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale
                                          : ((0x00800000U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                              ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale
                                              : (0x0000ffffU 
                                                 & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U] 
                                                    >> 4U))))
                                      : 0U));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in1_pd = ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                ? ((IData)((0U != (0x00300000U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_6
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_92)
                                : ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                    ? ((IData)((0U 
                                                != 
                                                (0x00c00000U 
                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])))
                                        ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_6
                                        : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_92)
                                    : 0ULL));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__2(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in0_pd = ((0x00004000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                ? ((0x00100000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min
                                    : ((0x00200000U 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                        ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75
                                        : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_84))
                                : ((0x00000040U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                    ? ((0x00400000U 
                                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                        ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77
                                        : ((0x00800000U 
                                            & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                            ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78
                                            : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_84))
                                    : 0ULL));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__3(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_out_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_prdy) 
                                & (((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)) 
                                    | ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.interp_out_vld) 
                                       & (0x0000003fU 
                                          == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_25)))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_int)));
    vlSelfRef.__PVT__int_interp_out_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                           | (IData)(vlSelfRef.interp_out_rdy));
    vlSelfRef.__PVT__int_rdy_d1 = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d2)) 
                                         | (IData)(vlSelfRef.__PVT__int_interp_out_rdy)));
    vlSelfRef.__PVT__int_rdy_d0 = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d1)) 
                                         | (IData)(vlSelfRef.__PVT__int_rdy_d1)));
    vlSelfRef.__PVT__int_in_load_d0 = ((IData)(vlSelfRef.__PVT__int_vld_d0) 
                                       & (IData)(vlSelfRef.__PVT__int_rdy_d0));
    vlSelfRef.__PVT__int_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d0)) 
                                         | (IData)(vlSelfRef.__PVT__int_rdy_d0)));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__4(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_in_pvld) 
                               & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.interp_in_rdy) 
                                  & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_busy_int)) 
                                     & (0x0000003fU 
                                        == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_5)))));
    vlSelfRef.__PVT__int_in_vld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                   & (IData)(vlSelfRef.interp_in_vld));
    vlSelfRef.__PVT__fp_in_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                  & (IData)(vlSelfRef.interp_in_vld));
    vlSelfRef.__PVT__int_in_load = ((IData)(vlSelfRef.__PVT__int_in_vld) 
                                    & (IData)(vlSelfRef.__PVT__int_in_rdy));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_2 = ((IData)(vlSelfRef.__PVT__fp_in_vld) 
                                                & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_sub_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_2) 
                                           & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__input_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__input_2 = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__input_1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__sel = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__sel = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_0 = 0;
    SData/*9:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__sel = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg1 = 0;
    CData/*3:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__arg2 = 0;
    IData/*23:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__arg2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__arg2 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_0 = 0;
    IData/*31:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__sel = 0;
    // Body
    vlSelfRef.__PVT__fp_interp_rdy_d1 = ((IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                         & (IData)(vlSelf->__PVT__u_fp_add->__PVT__HLS_fp17_add_core_inst__DOT__HLS_fp17_add_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)) 
                     | (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid))));
    vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d6)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2 
                = (0x000007ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
                                  >> 0x0dU));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5 
                = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)));
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2 
                = (7U & ((IData)(1U) + (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x00000018U))));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_17)));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_15;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2 
                = (1U & (((0U != (0x007fffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva))) 
                          | (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
                             >> 0x17U)) & (((0U != 
                                             (0x007fffffU 
                                              & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 & ((IData)(0x007fffffU) 
                                                    + vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva)))) 
                                            | (0U != 
                                               (0x007fffffU 
                                                & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva)))) 
                                           | (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
                                              >> 0x17U))));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt)) 
                  | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__sel 
                = ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_4_rgt) 
                     << 3U) | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_2_rgt) 
                               << 2U)) | (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_3_rgt) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_and_5_rgt)));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__input_1 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__input_2 
                = (0x0000001fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = (0x1eU & (- (IData)((1U & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__sel)))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result) 
                   | (1U & (- (IData)((1U & ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__sel) 
                                             >> 3U))))));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_v_5_4_2__380__Vfuncout;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__sel)
                    ? 0x1fU : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__377__Vfuncout;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1) 
                    & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2))) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29) 
                   & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_53_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__382__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__378__Vfuncout;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1;
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_14_10 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_slc_FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_23_13_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_carry_and_itm_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_11__369__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid))));
    vlSelfRef.__PVT__pipe_p6__DOT__p6_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d5)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2 
        = (((~ (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU) | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_4)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9) 
                     | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11)) 
                   | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0;
        }
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__Fp32ToFp17_and_1_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1 
                = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl) 
                          & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc))) 
                         | (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9))));
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_29) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_50_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__input_1 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__input_0 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__381__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
                | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)) 
                  & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl))) {
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__sel 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_48_rgt;
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__input_0 
                = (0x000003ffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1);
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__sel)
                    ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__input_1)
                    : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__input_0));
            __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__Vfuncout 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1 
                = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__379__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_5_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_31_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_nor_itm_2));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_mux1h_itm_1_4_0_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__input_1)
            : 0U);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_and_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_5_2_2__383__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
              & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_2_9_0_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__384__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                     & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11))) 
                 | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_1 
        = (1U & (~ ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3)) 
                            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3))) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_st_2)))) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__389__Vfuncout;
    vlSelfRef.__PVT__pipe_p8__DOT__p8_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_vld))));
    vlSelfRef.__PVT__pipe_p5__DOT__p5_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d4)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid))));
    vlSelfRef.__PVT__fp_interp_vld_d0 = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p7__DOT__p7_pipe_valid));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_and_cse) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1 
                = (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
        }
        if (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9) 
                     | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                    | (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1))) 
                   | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs 
                = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_31_1 = 0U;
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9))) 
             & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl))) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                = (0x1fffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 = 0U;
    }
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_mux_1_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__385__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
    }
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_0 
        = (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31) 
            << 0x0000001fU) | (((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23) 
                                << 0x00000017U) | vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__sel)
            ? __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_1
            : __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__input_0);
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__407__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__sel 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_zero_lpi_1_dfm_2;
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__input_0 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_2_nor_nl;
                    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__input_0));
                    vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__Vfuncout 
                        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_v_10_2_2__386__Vfuncout))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantRNE_24U_11U_else_acc_nl 
        = (0x000007ffU & ((0x000003ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                          >> 0x0dU)) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__vector 
                            = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_2;
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_1_10__399__Vfuncout)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg2 
        = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
            << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                               >> 0x00000017U))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg1 
        = (0x00800000U | (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x01000000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t) 
           | __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg1);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x01ffffffU & VL_SHIFTRS_III(25,25,4, vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__Vfuncout 
        = (0x00ffffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_itm 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_i_mant_s_rshift_rg__DOT__fshr_u__402__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva 
        = (0x0000003fU & ((IData)(0x0dU) + VL_EXTEND_II(6,5, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__vector 
                            = (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2) 
                                << 1U) | (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                   >> 0x17U))));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_4_5__370__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3 
        = (0x0000007fU & ((IData)(1U) + ((0x00000020U 
                                          & ((~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                 >> 0x0000001cU)) 
                                             << 5U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                               >> 0x00000017U)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0 
        = ((vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
            >> 0x0000000cU) & (0U != (0x00002fffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__vector 
        = (0x000001ffU & ((IData)(0x0061U) + (0x00000100U 
                                              | (0x000000ffU 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                     >> 0x00000017U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__364__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl 
        = (0x000001ffU & ((IData)(0x00d5U) + VL_EXTEND_II(9,8, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__vector 
                            = (0x0000007fU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x18U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2u_7_8__365__Vfuncout)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl 
        = (0x000003ffU & ((IData)(0x0161U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__Vfuncout 
                            = vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__conv_u2s_8_9__367__Vfuncout)))));
    vlSelfRef.__PVT__pipe_p4__DOT__p4_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d3)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__arg2 
        = (0x0000001fU & ((IData)(0x1fU) + (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__404__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_guard_mask_lshift_rg__DOT__fshl_u__403__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpMantDecShiftRight_23U_8U_10U_guard_mask_acc_1_psp_sva));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__arg2 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__arg2;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x00fffffcU & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x00ffffffU & (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                          << (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__arg2)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__Vfuncout 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u_1__406__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_sva 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantDecShiftRight_23U_8U_10U_least_mask_lshift_rg__DOT__fshl_u__405__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3) 
                 >> 5U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_0 
        = (1U & (~ (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                    >> 0x1cU)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_else_mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp 
        = (1U & (~ ((0x3fU == (0x0000003fU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_o_expo_sva_3))) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_2) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp)))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs_mx0w0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_carry_sva_mx0w0) 
           & (0x007fe000U == (0x007fe000U & vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__vector), 7U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_8_1_7__366__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__nl_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_nl));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__vector), 8U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_9_1_8__368__Vfuncout;
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_nand_tmp) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_3) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_3)) 
                          & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__376__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1) 
           | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1)));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d2)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_FpWidthDec_8U_23U_6U_10U_0U_1U_nor_ssc 
        = (1U & (~ ((~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_9)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_dcpl_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy)) 
                   | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_vld))));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__2(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_14 = 0;
    CData/*0:0*/ u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15;
    u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_15 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__vector;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__vector = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__sel = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_0;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_0 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_1 = 0;
    CData/*0:0*/ __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__sel = 0;
    // Body
    vlSelfRef.__PVT__fp_interp_vld_d1 = ((IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                                         & (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p10__DOT__p10_pipe_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__fp_interp_rdy_d1) 
                                                  & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_4 = ((IData)(vlSelfRef.__PVT__fp_interp_vld_d0) 
                                                & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_mul_sync_in_rdy_d1 = (1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__pipe_p9__DOT__p9_pipe_valid)) 
                                               | (IData)(vlSelfRef.__PVT__fp_mul_sync_in_rdy_d2)));
    vlSelfRef.__PVT__fp_mul_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_4) 
                                           & (IData)(vlSelf->__PVT__u_fp_mul->__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_28))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__not_tmp_20 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__375__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9) 
               & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpMantRNE_24U_11U_else_and_svs) 
                  & (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_10)))) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_5_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__390__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__sel 
        = (((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_77_cse) 
                | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_4)) 
                   | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_is_inf_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_2)) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse) 
                    & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_18))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_19_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_9)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_itm_8_1)) 
                       | ((~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1) 
                              & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_11) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                    & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                       & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_and_tmp))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_20_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__401__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_4) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_11_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout;
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__371__Vfuncout;
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__362__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__sel;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__363__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_nvdla_float_h_ln670_assert_iExpoWidth_ge_oExpoWidth_sig_mx0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__sel 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse) 
           & ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
              & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__vector 
        = (0x0000001fU & ((IData)(1U) + (0x00000010U 
                                         | ((0x0000000eU 
                                             & ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_i_shift_acc_psp_1_sva_2)) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_bits_sva_1_28_0_1 
                                                >> 0x17U))))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp 
        = (0x0000001fU & VL_SHIFTR_III(5,5,32, (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__vector), 4U));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__Vstatic__tmp));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__input_0 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__readslicef_5_1_4__358__Vfuncout;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__input_0) 
           & (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__sel));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__shift_0_prb 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__357__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_16_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_24;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__373__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_acc_itm_8_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__372__Vfuncout;
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_12_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_0 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_80_nl) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_dcpl_9));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__374__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_10_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__393__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__387__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_tmp_3)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_1;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__391__Vfuncout;
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
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_1 
        = ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_st_3) 
           & (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_42_cse));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_tmp_13;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__sel 
        = (1U & (~ (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_8_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_itm_7_1))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_9_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__394__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__sel 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_2_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_2_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_3_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__388__Vfuncout;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_else_acc_8_svs_st_3)) 
                    | (IData)(vlSelfRef.u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT____VdfgRegularize_h06354401_0_13))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_1 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_6_nl;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__and_tmp)) 
                    | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_16_nl))));
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_7_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__392__Vfuncout;
    vlSelfRef.__PVT__fp_sub_sync_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)) 
                                                 | (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy_d1)));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__sel 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_3;
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_else_if_acc_7_svs_st_4) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__FpWidthDec_8U_23U_6U_10U_0U_1U_if_slc_FpWidthDec_8U_23U_6U_10U_0U_1U_acc_8_svs_4)) 
                       | ((~ (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__main_stage_v_2)) 
                          | (IData)(vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__or_9_cse))))));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_0 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_14_nl;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__sel)
            ? (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_1)
            : (IData)(__Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__input_0));
    __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout 
        = vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__mux_15_nl 
        = __Vfunc_u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout;
    vlSelfRef.__VdfgRegularize_h098ddedf_0_3 = ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                                                & (IData)(vlSelfRef.__PVT__fp_sub_sync_in_rdy));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__3(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*119:0*/ __VdfgRegularize_h6e95ff9d_0_19372;
    VL_ZERO_W(120, __VdfgRegularize_h6e95ff9d_0_19372);
    QData/*57:0*/ __VdfgRegularize_h6e95ff9d_0_19375;
    __VdfgRegularize_h6e95ff9d_0_19375 = 0;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    // Body
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__int_vld_d1) & (IData)(vlSelfRef.__PVT__int_rdy_d1))) {
            if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
                __Vtemp_7[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U];
                __Vtemp_7[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U];
                __Vtemp_7[2U] = (0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[3U]);
            } else {
                __Vtemp_7[0U] = (IData)(vlSelfRef.__PVT__int_mul_for_Rshift);
                __Vtemp_7[1U] = (((- (IData)((1U & (IData)(
                                                           (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                            >> 0x00000039U))))) 
                                  << 0x0000001aU) | (IData)(
                                                            (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                             >> 0x00000020U)));
                __Vtemp_7[2U] = (0x00ffffffU & (0x00ffffffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__int_mul_for_Rshift 
                                                                          >> 0x00000039U))))) 
                                                   >> 6U)));
            }
            VL_EXTENDS_WW(89,88, __Vtemp_8, __Vtemp_7);
            __Vtemp_12[0U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               << 0x00000011U) | vlSelfRef.__PVT__interp_in0_pd_d1);
            __Vtemp_12[1U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               >> 0x0000000fU) | ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                                 >> 0x10U)))) 
                                                  << 0x00000011U));
            __Vtemp_12[2U] = (((- (IData)((1U & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                 >> 0x10U)))) 
                               >> 0x0000000fU) | (0x00fe0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__interp_in0_pd_d1 
                                                                    >> 0x10U)))) 
                                                     << 0x00000011U)));
            VL_EXTENDS_WW(89,88, __Vtemp_13, __Vtemp_12);
            VL_ADD_W(3, __Vtemp_14, __Vtemp_8, __Vtemp_13);
            vlSelfRef.__PVT__int_add[0U] = __Vtemp_14[0U];
            vlSelfRef.__PVT__int_add[1U] = __Vtemp_14[1U];
            vlSelfRef.__PVT__int_add[2U] = (0x01ffffffU 
                                            & __Vtemp_14[2U]);
        }
        if (vlSelfRef.__PVT__int_in_load_d0) {
            vlSelfRef.__PVT__int_mul = (0x01ffffffffffffffULL 
                                        & VL_MULS_QQQ(57, 
                                                      (0x01ffffffffffffffULL 
                                                       & VL_EXTENDS_QQ(57,40, vlSelfRef.__PVT__int_sub)), 
                                                      (0x01ffffffffffffffULL 
                                                       & VL_EXTENDS_QI(57,17, vlSelfRef.__PVT__interp_in_offset_d0))));
            vlSelfRef.__PVT__interp_in0_pd_d1 = vlSelfRef.__PVT__interp_in0_pd_d0;
            vlSelfRef.__PVT__interp_in_shift_d1 = vlSelfRef.__PVT__interp_in_shift_d0;
        }
        if (vlSelfRef.__PVT__int_vld_d1) {
            vlSelfRef.__PVT__int_vld_d2 = 1U;
        } else if (vlSelfRef.__PVT__int_interp_out_rdy) {
            vlSelfRef.__PVT__int_vld_d2 = 0U;
        }
        if (vlSelfRef.__PVT__int_in_load) {
            vlSelfRef.__PVT__interp_in_offset_d0 = vlSelfRef.interp_in_scale;
            vlSelfRef.__PVT__int_sub = (0x000000ffffffffffULL 
                                        & (VL_EXTENDS_QQ(40,39, 
                                                         (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelfRef.interp_in1_pd 
                                                                                >> 0x25U))))) 
                                                           << 0x00000026U) 
                                                          | vlSelfRef.interp_in1_pd)) 
                                           - VL_EXTENDS_QQ(40,39, vlSelfRef.interp_in0_pd)));
            vlSelfRef.__PVT__interp_in0_pd_d0 = vlSelfRef.interp_in_pd;
            vlSelfRef.__PVT__interp_in_shift_d0 = (
                                                   (0x00008000U 
                                                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                                     ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_94)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_95)
                                                      : 0x10U))
                                                    : 
                                                   ((0x00000080U 
                                                     & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                                     ? 
                                                    ((4U 
                                                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_96)
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                                       ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_97)
                                                       : 0x10U))
                                                     : 0U));
        }
        if (vlSelfRef.__PVT__int_vld_d0) {
            vlSelfRef.__PVT__int_vld_d1 = 1U;
        } else if (vlSelfRef.__PVT__int_rdy_d1) {
            vlSelfRef.__PVT__int_vld_d1 = 0U;
        }
        if (vlSelfRef.__PVT__int_in_vld) {
            vlSelfRef.__PVT__int_vld_d0 = 1U;
        } else if (vlSelfRef.__PVT__int_rdy_d0) {
            vlSelfRef.__PVT__int_vld_d0 = 0U;
        }
    } else {
        vlSelfRef.__PVT__int_mul = 0ULL;
        vlSelfRef.__PVT__int_add[0U] = 0U;
        vlSelfRef.__PVT__int_add[1U] = 0U;
        vlSelfRef.__PVT__int_add[2U] = 0U;
        vlSelfRef.__PVT__int_vld_d2 = 0U;
        vlSelfRef.__PVT__interp_in_offset_d0 = 0U;
        vlSelfRef.__PVT__int_sub = 0ULL;
        vlSelfRef.__PVT__interp_in0_pd_d1 = 0U;
        vlSelfRef.__PVT__interp_in_shift_d1 = 0U;
        vlSelfRef.__PVT__int_vld_d1 = 0U;
        vlSelfRef.__PVT__interp_in0_pd_d0 = 0U;
        vlSelfRef.__PVT__interp_in_shift_d0 = 0U;
        vlSelfRef.__PVT__int_vld_d0 = 0U;
    }
    __VdfgRegularize_h6e95ff9d_0_19372[0U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_19372[1U] = (IData)(vlSelfRef.__PVT__int_mul);
    __VdfgRegularize_h6e95ff9d_0_19372[2U] = (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__int_mul 
                                                                      >> 0x00000038U))))) 
                                               << 0x00000019U) 
                                              | (IData)(
                                                        (vlSelfRef.__PVT__int_mul 
                                                         >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_19372[3U] = (0x00ffffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__int_mul 
                                                                        >> 0x00000038U))))) 
                                                 >> 7U));
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
    vlSelfRef.__PVT__interp_in_shift_abs = (0x0000003fU 
                                            & ((0x00000020U 
                                                & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (0x0000001fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__interp_in_shift_d1))))
                                                : (IData)(vlSelfRef.__PVT__interp_in_shift_d1)));
    VL_SHIFTL_WWI(120,120,6, __Vtemp_23, __VdfgRegularize_h6e95ff9d_0_19372, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    VL_SHIFTR_WWI(120,120,6, __Vtemp_24, __VdfgRegularize_h6e95ff9d_0_19372, (IData)(vlSelfRef.__PVT__interp_in_shift_abs));
    if ((0x00000020U & (IData)(vlSelfRef.__PVT__interp_in_shift_d1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U] 
            = __Vtemp_23[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U] 
            = __Vtemp_23[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U] 
            = __Vtemp_23[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[3U] 
            = (0x00ffffffU & __Vtemp_23[3U]);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[3U] 
            = (0x00ffffffU & __Vtemp_24[3U]);
    }
    __VdfgRegularize_h6e95ff9d_0_19375 = (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U] 
                                                               >> 0x00000018U)))) 
                                           << 0x00000039U) 
                                          | (0x01ffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U])))));
    vlSelfRef.__PVT__int_mul_for_Rshift = (0x03ffffffffffffffULL 
                                           & ((0x01000000U 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U])
                                               ? ((
                                                   vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U] 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (0x7fffffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U]))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    VL_EXTENDS_QQ(58,57, 
                                                                  (0x01ffffffffffffffULL 
                                                                   & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U])) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U]))))))
                                                    : __VdfgRegularize_h6e95ff9d_0_19375)
                                                   : __VdfgRegularize_h6e95ff9d_0_19375)
                                               : (VL_EXTENDS_QQ(58,57, 
                                                                (0x01ffffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[2U])) 
                                                                     << 0x00000020U) 
                                                                    | (QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[1U]))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(58,57, (QData)((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19373[0U] 
                                                                                >> 0x0000001fU)))))));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__4(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_pd = ((IData)((0U != (0x00008080U 
                                              & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])))
                               ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[7U] 
                                                  << 0x00000010U) 
                                                 | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[6U] 
                                                    >> 0x00000010U)))
                               : 0U);
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__1(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_scale = ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                  ? ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                      ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_uflow_scale
                                      : ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_slope_oflow_scale
                                          : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U] 
                                             >> 0x00000010U)))
                                  : ((0x00000080U & 
                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                      ? ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                          ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_uflow_scale
                                          : ((8U & 
                                              vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                              ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_slope_oflow_scale
                                              : (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U] 
                                                 >> 0x00000010U)))
                                      : 0U));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__2(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in1_pd = ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                ? ((IData)((0U != (3U 
                                                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])))
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_7
                                    : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_93)
                                : ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                    ? ((IData)((0U 
                                                != 
                                                (0x0000000cU 
                                                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])))
                                        ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__hit_in1_pd_7
                                        : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_93)
                                    : 0ULL));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__3(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in0_pd = ((0x00008000U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                ? ((1U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                    ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lut_le_min
                                    : ((2U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                        ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_75
                                        : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85))
                                : ((0x00000080U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[0U])
                                    ? ((4U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                        ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_77
                                        : ((8U & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p1_pipe_data[1U])
                                            ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78
                                            : vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85))
                                    : 0ULL));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__4(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_out_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_prdy) 
                                & (((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__int8_en)) 
                                    | (0x0000007fU 
                                       == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_26))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_rd_pvld_int)));
    vlSelfRef.__PVT__int_interp_out_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                           | (IData)(vlSelfRef.interp_out_rdy));
    vlSelfRef.__PVT__int_rdy_d1 = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d2)) 
                                         | (IData)(vlSelfRef.__PVT__int_interp_out_rdy)));
    vlSelfRef.__PVT__int_rdy_d0 = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d1)) 
                                         | (IData)(vlSelfRef.__PVT__int_rdy_d1)));
    vlSelfRef.__PVT__int_in_load_d0 = ((IData)(vlSelfRef.__PVT__int_vld_d0) 
                                       & (IData)(vlSelfRef.__PVT__int_rdy_d0));
    vlSelfRef.__PVT__int_in_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__int_vld_d0)) 
                                         | (IData)(vlSelfRef.__PVT__int_rdy_d0)));
    vlSelfRef.interp_in_rdy = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
                                ? ((IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_3))
                                : (IData)(vlSelfRef.__PVT__int_in_rdy));
}

void Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__5(Vsim_NV_NVDLA_CDP_DP_INTP_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_CDP_DP_INTP_unit___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interp_in_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__intp_in_pvld) 
                               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_intpinfo_sync_fifo__DOT__intpinfo_wr_busy_int)) 
                                  & (0x0000007fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT____VdfgRegularize_hf6d7bd17_0_6))));
    vlSelfRef.__PVT__int_in_vld = ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)) 
                                   & (IData)(vlSelfRef.interp_in_vld));
    vlSelfRef.__PVT__fp_in_vld = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en) 
                                  & (IData)(vlSelfRef.interp_in_vld));
    vlSelfRef.__PVT__int_in_load = ((IData)(vlSelfRef.__PVT__int_in_vld) 
                                    & (IData)(vlSelfRef.__PVT__int_in_rdy));
    vlSelfRef.__VdfgRegularize_h098ddedf_0_2 = ((IData)(vlSelfRef.__PVT__fp_in_vld) 
                                                & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld));
    vlSelfRef.__PVT__fp_sub_sync_in_vld = ((IData)(vlSelfRef.__VdfgRegularize_h098ddedf_0_2) 
                                           & (IData)(vlSelf->__PVT__u_fp_sub->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
}
